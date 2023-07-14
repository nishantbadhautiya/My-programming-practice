const express = require('express');
const router = express.Router();
const multer = require('multer')
const filecollection = require('../models/file');
const { v4: uuidv4 } = require('uuid');
const sendMail = require('../services/emailservices');


const storage = multer.diskStorage({
    destination: function (req, file, cb) {
        cb(null, 'uploads/')
    },
    filename: function (req, file, cb) {
        const uniqueSuffix = Date.now() + '-' + Math.round(Math.random() * 1E9)
        cb(null, file.fieldname + '-' + uniqueSuffix + file.originalname)
    }
})

const upload = multer({
    storage: storage,
    limits: {
        fileSize: 1000000 * 100
    }
}).single('myfile');




router.post('/', (req, res) => {
    upload(req, res, async function (err) {
        if (err) {
            res.status(500).send(err);
        }
        const file = new filecollection({
            filename: req.file.filename,
            path: req.file.path,
            size: req.file.size,
            uuid: uuidv4()
        })
        const response = await file.save();
        res.status(200).send(response);
    })
})


router.post('/send', async (req, res) => {
    try {
        const { uuid, emailto, emailfrom } = req.body;
        console.log(uuid);
        if (!uuid || !emailto || !emailfrom) {
            res.status(401).send("all fields are compulsary");
        }
        else {
            const file = await filecollection.findOne({ uuid: uuid });
            if (!file) {
                res.status('201').send('No file found with this given uuid');
            }
            else {
                file.sender = emailfrom;
                file.receiver = emailto;
                await file.save();
                sendMail(emailto, emailfrom, file.size, file.filename, file.uuid);
                sendMail({
                    emailto : emailto,
                    emailfrom: emailfrom,
                    size : file.size,
                    filename : file.filename,
                    uuid : file.uuid,
                    subject :  `${emailfrom} send you a mail`
                })
            }
        }
    } catch (error) {
        res.status(500).send('Internal server error');
    }
})



module.exports = router;
