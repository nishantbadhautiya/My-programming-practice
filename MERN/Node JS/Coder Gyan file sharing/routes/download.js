const express = require('express');
const route = express.Router();
const filecollection = require('../models/file');


route.get('/download/:uuid', async (req, res) => {
    try {
        const file = await filecollection.findOne({ uuid: req.params.uuid });
        if (!file) {
            res.status(401).send("no file exist with this uuid please check your uuid");
        }
        else {
            const filelocation = `${__dirname}/../uploads/${file.filename}`
            res.download(filelocation);
        }
    } catch (error) {
        res.status(401).send({ error: error.message, result: "Internal Server error" });
        console.log(error);
    }
})

module.exports = route;
