// website Route using http server
const http = require('http');
const port = process.env.port || 3000;

const server = http.createServer((req, res)=> {
    // console.log(req);
    // console.log(req.url);
    res.setHeader('content-type', 'text/html'); // request will be serve as html else it will print in plain text
    if(req.url == '/'){
        res.statusCode = 200;
        const data = fs.readFileSync('index.html')
        res.end(data.toString());
    }
    else if(req.url == '/about'){
        res.statusCode = 200;
        res.end('<h1>About section of code with harry</h1> <p>Hey this is the way to rock the world in about section </p>');
    }
    else if(req.url == '/hello'){
        res.statusCode = 200;
        res.end('<h1>This is codewithHarry hello</h1> <p> Hello this is the way to rock the world</p>');
    }
    else{
        // res.harry();
        res.statusCode = 404;  // http status code = 404 means not found
        res.end('<h1>page not found</h1><p>This page was not found on the server </p>');
    }
})
server.listen(port, () => {
    console.log(`Server is listening on port: ${port}`)
});
