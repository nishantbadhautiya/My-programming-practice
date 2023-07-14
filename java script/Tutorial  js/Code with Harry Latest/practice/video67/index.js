// let options = {
//   method: "POST",
//   headers: {
//     "Content-type": "application/json",
//   },
//   body: JSON.stringify({
//     title: 'Nishant',
//     body: 'Badhautiya',
//     userId: 100,
//   }),
// }
// fetch("https://jsonplaceholder.typicode.com/posts", options)
//   .then((response) => response.json())
//   .then((value) => console.log(value));




// let createTodo = async()=>{
//     let options = {
//         method: "POST",
//         headers: {
//           "Content-type": "application/json",
//         },
//         body: JSON.stringify({
//           title: 'Nishant',
//           body: 'Badhautiya',
//           userId: 100,
//         }),
//       }
//       let p = await fetch("https://jsonplaceholder.typicode.com/posts", options)
//       let response = await p.json();
//       return response;
// }
// const mainFunc = async() => {
//     let todo = await createTodo();
//     console.log(todo);
// }
// mainFunc();





// // Harry Code
// const createTodo = async (todo) => {
//     let options = {
//             method: "POST",
//             headers: {
//                     "Content-type": "application/json"
//             },
//             body: JSON.stringify(todo),
//     }
//     let p = await fetch('https://jsonplaceholder.typicode.com/posts', options)
//     let response = await p.json()
//     return response
// }
// const getTodo = async (id) => {
//     let response = await fetch('https://jsonplaceholder.typicode.com/posts/' + id)
//     let r = await response.json()
//     return r
// }
// const mainFunc = async () => {
//     let todo = {
//             title: 'Harry2',
//             body: 'bhai2',
//             userId: 1100,
//     }
//     let todor = await createTodo(todo)
//     console.log(todor)
//     console.log(await getTodo(8))
// }
// mainFunc()