// const hello = require("./module1");
// // hello();

// hello.hello();
// hello.ahello("Nishant");
// hello.ahello("Aman");
// hello.ahello("Amit");
// hello.ahello("Rohan");





const {hello,ahello} = require("./module1");   //destructuring of hello and ahello

hello();
ahello("Nishant");
ahello("Aman");
ahello("Amit");
ahello("Rohan");