let p1 = new Promise((resolve, reject) =>{
    console.log("Promise in pending");
    setTimeout(() => {
        // console.log("I am a promise and i am resolved");
        resolve("Hurrah! I got resolved");
    }, 3000);
})

let p2 = new Promise((resolve, reject) =>{
    console.log("Promise in pending");
    setTimeout(() => {
        // console.log("I am a promise and i am rejected");
        reject(new Error("I am an error"));
    }, 3000);
})
p1.then(function(result){
    console.log(result);
}, (Error)=>{
    console.log("error")
})
// p2.catch((error)=>{
//     console.log("some error occured in p2")
// })