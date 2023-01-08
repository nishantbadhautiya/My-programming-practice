// let complete = false;
// let prom = new Promise (function(resolve , reject){
//     if(complete){
//         resolve(" i am successful");
//     }
//     else{
//         reject(" i am failed");
//     }
// });
// console.log(prom);




// function prom(complete){
//     return  new Promise(function(resolve, reject){
//         if(complete){
//             resolve("successfull")
//         }
//         else{
//             reject("failed")
//         }
//     })
// }
// console.log(prom(false))



// function prom(complete){
//     return  new Promise(function(resolve, reject){
//         console.log("fetching data, please wait.....");
//        setTimeout(() => {
//         if(complete){
//             resolve("successfull")
//         }
//         else{
//             reject("failed")
//         }
//        }, 2000);
//     })
// }
// // console.log(prom(false))

// let onFullfilment = (result) => {
//     console.log(result);
// }
// let onRejection = (error) => {
//     console.log(error)
// }
// // prom(true).then(onFullfilment);
// // prom(false).catch(onRejection);
// prom(false).then(onFullfilment).catch(onRejection);








// function prom(complete) {
//     return new Promise(function (resolve, reject) {
//         console.log("fetching data, please wait.....");
//         setTimeout(() => {
//             if (complete) {
//                 resolve("successfull")
//             }
//             else {
//                 reject("failed")
//             }
//         }, 2000);
//     })
// }
// prom(true).then((result) => {
//     console.log(result);
// }).catch((error) => {
//     console.log(error)
// });



let prom = function (a,b) {
    return new Promise(function (resolve, reject) {
        // console.log("Solving the problem, please wait.....")
        if (a,b) {
            resolve(a/b)
        }
        else {
            reject("failed")
        }
    })
}
prom(12,3).then((result) => {
    console.log(result)
}).catch((error) =>{
    console.log(error)
})