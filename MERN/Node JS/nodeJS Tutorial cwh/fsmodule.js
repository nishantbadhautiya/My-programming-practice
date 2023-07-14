// const fs = require('node:fs');
// //            file name    encoding    callback function
// fs.readFile('./file.txt', 'utf8', (err, data)=>{    
//     console.log(err, data);
// })
// console.log("Finished Reading File");


/* Notes:-
1>  first file.txt will read
2>  then console.log() will be print
3>  after that callback function will be run so it will take time to run  it's due to the asynchronous non-blocking i/o model
*/



//*********************************************************************************************


// Read File Sink
// const fs = require('fs');
// const a = fs.readFileSync('./file.txt');
// console.log(a.toString());     // toString method is used to convert into string else it will show our file into buffer
// console.log("Finished Reading file");


/* Notes:-
1>  first file will  read and print 
2>  after that our console.log() will be run so Node JS will intensaly block our code to run further so use readFileSync 
 */


// ****************************************************************************************************

// writeFile is used to write into the file
// const fs = require('fs');
// fs.writeFile('file2.txt', "This is second file\n", () => {
//     console.log("written to the file");
// })
// console.log("Finished writing file");




const fs = require ('fs');
const a = fs.writeFileSync('file2.txt', 'This is a second file of writeFileSync') // writeFileSync doesn't return anything
console.log(a);
console.log("Finished writing file");
