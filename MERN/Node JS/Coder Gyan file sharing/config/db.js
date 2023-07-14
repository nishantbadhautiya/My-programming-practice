const mongoose = require('mongoose');
const connectToMongo = () => {
    mongoose.connect('mongodb://localhost:27017/filesharedb').then(()=>{
        console.log('connected to mongoDB successfully');
    }).catch('failed to connection with mongoDB');
}
module.exports = connectToMongo;
