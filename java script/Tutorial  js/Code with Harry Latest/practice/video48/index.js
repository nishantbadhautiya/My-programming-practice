let a = document.getElementById("btn");
let x = function(event) {
    console.log(event)
    console.log(event.target);
    console.log(event.type)
    console.log(event.clientX)
    console.log(event.clientY)
    console.log(event.currentTarget);
    // alert("Hello world 1");
}
// let y = function(e){
//     alert("Hello world 2");
// }
a.addEventListener('click', x);
// a.addEventListener('click', y);
 
// let b = prompt("what is your favourite Number");
// if (b == "2") {
    // a.removeEventListener('click',x);
// }
