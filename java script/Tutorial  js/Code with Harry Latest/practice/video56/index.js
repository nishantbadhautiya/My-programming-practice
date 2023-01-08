let prom =  new Promise((resolve, reject) => {
    setTimeout(() => {
        console.log("Promise 1 got resolved")
        resolve(34)
    }, 2000);
});
prom.then((value)=>{
    console.log(value);
    let p2 = new Promise((resolve, reject)=>{
        setTimeout(() => {
            resolve("promise 2")
        }, 3000);
    })
    return p2;
}).then((value)=>{
    setTimeout(() => {
        console.log("we are done");
    }, 5000);
    return 3;
}).then((value)=>{
    setTimeout(() => {
        console.log("we are pakka done");
    }, 1000);
})



