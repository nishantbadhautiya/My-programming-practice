const express = require('express');
const route = express.Router();
const filecollection = require('../models/file');


route.get('/show/:uuid', async (req, res) => {
    try {
        const file = await filecollection.findOne({ uuid: req.params.uuid });
        if (!file) {
            return res.render('download', {error: 'Link has been expired'});
        }
        else {
            return res.render('download',{
                filename : file.filename,
                filesize : file.size,
                downloadlink: `${process.env.BASE_URL}/files/download/${file.uuid}`,
                createdate : file.createdAt,
                updatedate : file.updatedAt
            });
        }
    } catch (error) {
        res.status(401).send({ error: error.message, result: "Internal Server error" });
        console.log(error);
    }
})

module.exports = route;
