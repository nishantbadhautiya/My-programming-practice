// node js automatically wrap in module wrapper function
// (function(exports, require, module, __filename, __dirname) {
    harry = {
        name: "Harry",
        favNum: 33,
        developer: true,
    }
    // console.log(exports, require, module, __filename, __dirname);
    module.exports = harry;
// })