const express = require('express');
const app = express();
require('dotenv').config()
const PORT = process.env.PORT;
const connectToMongo = require('./config/db');
connectToMongo();
app.use(express.json());

const path = require('path');
const view_location = path.join(__dirname,'/views');
app.set('views', view_location);
app.set('view engine', 'ejs');

app.use('/api/files', require('./routes/file'));
app.use('/files/', require('./routes/download'));
app.use('/files/', require('./routes/show'));

app.listen(PORT, () => {
    console.log(`server is listening on http://localhost:${PORT}`);
})
