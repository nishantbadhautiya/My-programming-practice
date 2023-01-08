/*  code of harry replit

let promise = new Promise(function(resolve, reject) {
    alert("Hello")
    resolve(56)
})

console.log("Hello One")
setTimeout(function() {
    console.log("Hello Two in 2 seconds")
}, 2000)

console.log("My name is " + "Hello Three")
console.log(promise)


// Fetch google.com homepage  ==> console.log("google.com homepage done")
// Fetch data from the data api 
// Fetch pictures from the server 
// Print downloading 
// Rest of the script 
*/






let prom = new Promise(function(resolve, reject){
    console.log("Hello")
    resolve(56)
})
console.log("Hello one")
setTimeout(() => {
    console.log("Hello two")
}, 2000);
console.log("hello three")
console.log(prom)

