//Method 1

// function show(){
//     console.log("This is a show function");
// }
// function func(callback){
//     callback()
// }
// func(show)



//method 2 passing the arguments
// function show(a){
//     console.log("the value of a is: "+a);
// }
// function func(callback){
//     let a= 78;
//     callback(a);
// }
// func(show);


//Method 3
// function show(a){
//     console.log("the value of a is: "+a);
// }
// function func(callback, a){
//     a = 99;
//     callback(a);
// }
// let a;
// func(show, a);


//Method 4
// function func(callback){
//     callback();
// }
// func(show = () => console.log("this is a functions"))


//Method 5
// function func(callback){
//     callback();
// }
// func(show => console.log("this is a functions"))




// Method 6     // important, shortcut and useful
// function func(callback){
//     let a = 44;
//     callback(a);
// }
// func(a => console.log("the value of a is "+a))





// Synchronous and Asynchronous Javascript Programming

// setTimeout(function show(){
//     console.log("I am a set interval function");
// }, 5000);
// console.log("Hello world");

