/*
1.  Register
2.  send - welcome email
3.  Login
4.  get user data
5.  display user data 
*/
function Register() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            console.log("register end")
            return resolve("error while registration......");
            
        }, 1000);
    })
}
function sendEmail() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            console.log("Email end")
        }, 2000)
        resolve()
    })
}
function login() {
    return new Promise((resolve, reject)=>{
        setTimeout(() => {
            console.log("Login end");
        }, 3000);
        resolve();
    })
}
function getuserdata() {
    return new Promise((resolve, reject)=>{
        setTimeout(() => {
            console.log("Got user data");
        }, 3000);
        resolve();
    })
}
function displayuserdata() {
    return new Promise((resolve, reject) =>{
        setTimeout(() => {
            console.log("displayed user data");
        }, 1000);
    })
}

async function authenticat(){
    await Register();
    await sendEmail();
    await login();
    await getuserdata();
    await displayuserdata();
}
authenticat().then(() => {
    console.log("all set");
})

// Register().then(sendEmail).then(login).then(getuserdata).then(displayuserdata)
// .catch((err) => {
//     console.log('error', err);
// })

console.log("Other application work");

