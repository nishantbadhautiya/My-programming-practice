// closures in javascript

// let message = "Hello global";
// function hello1() {
//     // let message = "Good Morning"
//     console.log("Hello 1:  " + message);
// }
// hello1();


let message = "Hello global";
function hello1() {
    let message = "Good Morning"
    // let message = "Good Afternoon";
    console.log("Hello 1:  " + message);
    let c = function hello2() {
        console.log("I am C  " + message);
    }
    return c;
}
let c = hello1();
c();