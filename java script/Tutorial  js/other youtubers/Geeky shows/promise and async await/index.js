// console.log('start');
// function getName(name, callback) {
//     setTimeout(() => {
//         console.log('inside Name settimeout');
//         callback(name)
//     }, 2000);
// }
// function gethobbies(name, callback) {
//     setTimeout(() => {
//         console.log('inside Hobbies settimeout');
//         callback(['cricket', 'football', 'reading', 'singing'])
//     }, 1000);
// }

//// callback hell:-

// getName("amit", (names) => {
//     console.log(names);
//     gethobbies(names, (arr) => {
//         console.log(names);
//         arr.forEach(element => {
//             console.log(element)
//         });
//     })
// });







//Basic example of promise
// const promiseobj = new Promise((resolve, reject) => {
//         let req = false;
//         if (req == true) {
//                 resolve("Request success")
//         }
//         else {
//                 reject("Request Rejected")
//         }
// }).then(
//         (value) => {console.log(value)},
//         (error) => {console.log(error)}, 
//         )

// promiseobj.then((result) => {
//         console.log(result);
// }).catch((err) => {
//         console.log(err);
// });







//Method Chaining example
// const promiseobj = new Promise((resolve, reject) =>{
//         let num = 10;
//         resolve(num);
// }).then((value) =>{
//         console.log(value);
//         return value+10;
// }).then((value) => {
//         console.log(value);
// })





//then catch and finally 
// const promiseobj = new Promise((resolve, reject) => {
//         let req = true;
//         if (req == true) {
//                 resolve("Request success")
//         }
//         else {
//                 reject("Request Rejected")
//         }
// }).then((result) => {
//         console.log(result);    
// }).catch((err) => {
//         console.log(err);
// }).finally(() => {console.log('Cleaned UP');})






// console.log('start');
// function getName(name) {
//         return new Promise((resolve, reject) => {
//                 setTimeout(() => {
//                         console.log('inside Name settimeout');
//                         resolve(name)
//                 }, 2000);
//         })
// }
// function gethobbies(name) {
//         return new Promise((resolve, reject)=>{
//                 setTimeout(() => {
//                         console.log(name);
//                         console.log('inside Hobbies settimeout');
//                         resolve(['cricket', 'football', 'reading', 'singing'])
//                 }, 1000);
//         })
// }

// getName('Nishant').then(nm => gethobbies(nm)).then(hobby =>console.log(hobby))
// // getName('Nishant').then((nm) =>{
// //         gethobbies(nm);
// // }).then((hobby) =>{
// //         console.log(hobby);
// // })
// console.log('end');










// Async and Await
