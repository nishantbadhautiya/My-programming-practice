// let a = document.getElementById("btn1");
// let b = document.getElementById("btn2");
// let c = document.getElementById("btn3");
// const a1 = function() {
//     alert("This is an alert 1");
// }
// a.addEventListener('click',a1);

// const a2 = function(){
//     alert("this is an alert 2");
// }
// b.addEventListener('click',a2);

// const a3 = function(){
//     alert("this is an alert 3");
// }
// c.addEventListener('click',a3);






// let a = document.getElementById("btn1");
// let b = document.getElementById("btn2");
// let c = document.getElementById("btn3");

// const func1 = function(e) {
//     // console.log(e);
//     // document.location = "https://www.google.com";
//     window.open("https://www.google.com"," ","width = 500px , height = 1200px");
//     // let url = "https://www.google.com";
//     // let win = window.open(url  , "width= 500, height = 500")
//     window.focus();
// }
// a.addEventListener('click',func1);


// const func2 = function(e) {
//     // console.log(e);
//     // document.location = "https://www.google.com";
//     window.open("https://www.amazon.com", '_blank');
// }
// b.addEventListener('click',func2);


// const func3 = function(e) {
//     // console.log(e);
//     // document.location = "https://www.google.com";
//     window.open("https://www.facebook.com", '_blank');
// }
// c.addEventListener('click',func3);



//problem 04

// setInterval(async function(){
//     let url = 'https://jsonplaceholder.typicode.com/todos/1'
//     console.log(await fetchContent(url));
// }, 1000);



//problem 05

let a = document.getElementsByClassName("bulb")[0];

console.log("Bulb-on")
setInterval(() => {
    a.classList.toggle("bulbstop")
    clearInterval(1);
    console.log("Bulb-off");
}, 2020);