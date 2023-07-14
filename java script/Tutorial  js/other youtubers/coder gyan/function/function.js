// function login(username , password){
//     //code inside here
//     console.log(`${username} Login sucessfully with password ${password}`);
// }
// login("john", "123456");
// login("jain", "223344")


// function uppercase(str){
//     return str.toUpperCase();
// }
// let a = uppercase("Javascript")
// console.log(a);


//default parameter
// function calculatearea(width , height){
//     height === undefined? null: height;
//     const area =  width*height;
//     return area;
// }
// let area  = calculatearea(21);
// console.log(area);


//variable scope
// const filename = "xyz.pdf";
// function download(){
//     console.log(filename);
// }
// download();
// console.log(filename);


//function declaration
// function login(){

// }


//Anonymous function
// const login = function(a, b){
//     console.log("Python");
// }
// login();






//call back function
// function formattext(text , formatcb){
//     return typeof formatcb === 'function'? formatcb(text) : text.toUpperCase()
// }

// // const result = formattext("hello javascript", function(text){
// //     return text.charAt(0).toUpperCase() + text.slice(1);
// // });

// const result = formattext("hello javascript", (text) => text.charAt(0).toUpperCase() + text.slice(1));
// console.log(result)






// IIFE ( Immediately invoked function expression)
// (function setup(){
//     console.log('setup done');
// }());


// (function setup(){
//     console.log('setup done');
// })();


// Arrow Function
// const login = (username , password)  =>{
//     console.log("logged in "+ username +" "+  password);
// }
// login("harry", "112233");



// one line arrow function
// const sum = (num1 , num2) => num1 + num2;

// const result = sum(12,22)
// console.log(result)
