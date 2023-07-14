const http = require('http');
const port = process.env.port || 3000;

const server = http.createServer((req, res)=> {
    console.log(req);
    // console.log(req.url);
    res.statusCode = 200;
    res.setHeader('content-type', 'text/html'); // request will be serve as html else it will print in plain text
    res.end('<h1>This is codewithHarry</h1> <p>Hey this is the way to rock the world</p>')
})
server.listen(port, () => {
    console.log(`Server is listening on port: ${port}`)
});
