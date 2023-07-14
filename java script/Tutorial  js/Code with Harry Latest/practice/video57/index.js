let p1 = new Promise((resolve, reject)=>{
    setTimeout(() => {
        console.log("Hii! I am not Resolved")
        resolve()
    }, 2000);
}).then(()=>{
    console.log("Hurrah! ")
    return new Promise((resolve, reject)=>{
        setTimeout(() => {
            resolve(33)
        }, 4000);
    })
}).then((value)=>{
    console.log(value)
})
p1.then(()=>{
    console.log("congratulation this promise is now resolved")
})
