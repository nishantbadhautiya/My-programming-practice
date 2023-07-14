// const url = "https://jsonplaceholder.typicode.com/users";
// function myAxios(method, url, body = null) {
//     return fetch(url);
// }
// myAxios("GET", url).then((result) => {
//     console.log(result);
// }).catch((err) => {
//     console.log(err);
// })





// using get request by using fetch method

// const url = "https://jsonplaceholder.typicode.com/users";
// function myAxios(method, url, body = null) {
//     // return fetch(url).then((res) => {
//     //     // return res.text();
//     //     return res.json();
//     // });
//     return fetch(url).then((res)=>{return res.json()});
// }
// myAxios("GET", url).then((result) => {
//     console.log(result);
// }).catch((err) => {
//     console.log(err);
// })




// using post request by using fetch method
// let url = "https://jsonplaceholder.typicode.com/users"
// function myAxios(method, url, body = null){
//     const headers = {
//         "Content-Type" : "application/json",
//     }
//     return fetch(url,{
//         method : method,
//         headers : headers,
//         body : JSON.stringify(body)
//     }).then((res)=>{
//         return res.json();
//         // return res.text();
//     })
// }
// myAxios("POST", url, {
//     name: "Nishant",
//     job :"Web developer"
// }).then((res)=>{
//     console.log(res);
// }).catch((err)=>{
//     console.log(err);
// });

