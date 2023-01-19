// const url = "https://jsonplaceholder.typicode.com/users";
// const xhr = new XMLHttpRequest();
// xhr.open("GET", url, true);
// xhr.onload = () => {      // adding onloader event listener
//     // console.log("OK");
//     // console.log(xhr.response);
//     console.log(JSON.parse(xhr.response));  // data will parse in json form
// }
// xhr.send();



// or we can do this also to get into JSON form


// const url = "https://jsonplaceholder.typicode.com/users";
// const xhr = new XMLHttpRequest();
// xhr.open("GET", url, true);
// xhr.responseType = "json"
// xhr.onload = () => {
//     if (xhr.status >= 400) {
//         console.log("Failed!!!!");
//     }
//     else {
//         console.log(xhr.status);
//         console.log(xhr.response);
//     }
// }
// xhr.onerror = () => {
//     console.log("Errror!!!");
// }
// xhr.send();






// function myAxios(method, url, request_body = null) {
//     const xhr = new XMLHttpRequest();
//     xhr.open(method, url);
//     xhr.responseType = "json"
//     xhr.setRequestHeader("Content-type" , "application/json")   //used to set a request header content-type to application/json insted of content-type: text/plain
//     xhr.onload = () => {
//         if (xhr.status >= 400) {
//             console.log("Failed!!!!");
//         }
//         else {
//             console.log(xhr.status);
//             console.log(xhr.response);
//         }
//     }
//     xhr.onerror = () => {
//         console.log("Errror!!!");
//     }
//     xhr.send(JSON.stringify(request_body));   //used to change object to string
// }
// const url = "https://jsonplaceholder.typicode.com/users";
// // myAxios("GET", url);
// myAxios("POST", url, {
//     name: "Nishant",
//     job: "Software developer"
// })





function myAxios(method, url, request_body = null) {
    return new Promise((resolve, reject) => {
        const xhr = new XMLHttpRequest();
        xhr.open(method, url);
        xhr.responseType = "json";
        xhr.setRequestHeader("Content-type", "application/json");
        xhr.onload = () => {
            if (xhr.status != 201) {
                console.log("Failed!!!  during onloads");
                reject(xhr.response);
            }
            else {
                // console.log(xhr.status);
                // console.log(xhr.response);
                resolve(xhr.response);
            }
        }
        xhr.onerror = () => {
            console.log("Error !!!!");
            reject(xhr.response)
        }
        xhr.send(JSON.stringify(request_body));
    });
}
let url = "https://jsonplaceholder.typicode.com/users"
let a = myAxios("POST", url, {
    name: "Nishant",
    job: "web developer"
})
a.then((result)=>{
    console.log("Message from than block " , result);
    console.log("SUCCESS");
})