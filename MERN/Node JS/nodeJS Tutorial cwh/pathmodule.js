const path = require('node:path');
let a = path.basename('C:\\temp\\myfile.html');
a = path.dirname('C:\\temp\\myfile.html');
a = path.extname('C:\\temp\\myfile.html');
a = path.extname(__filename);
a = path.dirname(__filename);
console.log(a);
