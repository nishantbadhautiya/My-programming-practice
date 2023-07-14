const app = require('./app');

require('dotenv').config({ path: './backend/config/.env' })
require('dotenv').config();

//connect to database
const connectDatabase = require('./config/database');
connectDatabase();

app.listen(process.env.PORT, () => {
    console.log(`server is working on : http://localhost:${process.env.PORT}`)
})
