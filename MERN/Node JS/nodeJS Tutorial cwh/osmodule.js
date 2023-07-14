const os = require('node:os');  // build in module so not need to specify path
console.log(os.freemem());   // gives free memory in bytes
console.log(os.homedir());  //Returns the string path of the current user's home directory.
console.log(os.hostname());
console.log(os.platform());
console.log(os.release());
console.log(os.totalmem());
console.log(os.uptime());   // uptime in seconds
console.log(os.tmpdir());  //give the path of temperary file 
console.log(os.type());
console.log(os.version());
