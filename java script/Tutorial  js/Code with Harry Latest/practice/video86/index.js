let a = new Promise((resolve, reject) =>{
    setTimeout(() => {
        resolve(333);
    }, 2000);
})