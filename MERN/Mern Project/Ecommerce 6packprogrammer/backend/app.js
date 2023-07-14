const express = require('express');
const app = express();
app.use(express.json());


// Route imports
const product = require('./routes/ProductRoute');
app.use('/api/v1', product);


module.exports = app;

