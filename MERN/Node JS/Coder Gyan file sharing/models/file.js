const mongoose = require('mongoose');
const fileSchema = mongoose.Schema({
    filename: {
        type: String,
        required: true
    },
    path: {
        type: String,
        required: true
    },
    size: {
        type: Number,
        required: true
    },
    uuid: {
        type: String,
        required: true
    },
    sender: {
        type: String,
        required: false
    },
    receiver: {
        type: String,
        required: false
    },
}, { timestamps: true })
const filecollection = mongoose.model('filecollection', fileSchema);
module.exports = filecollection;
