
/*
1.  Register
2.  send - welcome email
3.  Login
4.  get user data
5.  display user data 
*/


function waitthreesecond(){
    let ms = 3000 + new Date().getTime();
    while(new Date() < ms);
}

function Register ( callback ){
    setTimeout(() => {
        console.log("register end");
        callback();
    }, 1000);
    // waitthreesecond();
}
function sendEmail(callback){
    setTimeout(() => {
        console.log("Email end");
        callback();
    }, 2000);
    // waitthreesecond();
}   
function login(callback){
    // waitthreesecond();
    setTimeout(() => {
        console.log("Login end");
        callback();
    }, 3000);
}
function getuserdata(callback){
    // waitthreesecond();
    setTimeout(() => {
        console.log("Got user data");
        callback();
    }, 1000);
}
function displayuserdata(){ 
    setTimeout(() => {
        console.log("displayed user data");
    }, 1000);
}
//callback hell 
Register(function(){
    sendEmail(function(){
        login(function(){
            getuserdata(function(){
                displayuserdata();
            });
        }); 
    });
});

console.log("Other application work");
