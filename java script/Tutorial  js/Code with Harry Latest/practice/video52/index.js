//synchronous programming
// let a = alert("i am Nishant");
// let b = alert("I am good")
// let c = alert("i am a person");
// console.log(a+b+c)

// Asynchronous Programming
// console.log("start")
// setTimeout(() => {
//     console.log("settimeout")
// }, 3000);
// console.log("end")



// Callback function
// function loadJavascript(url, callback){
//     var script = document.createElement("script")
//     script.src = url;
//     // script.onload= function(){
//         //     console.log("script loaded with src "+ url);
//     //     callback(null, url)
//     // }
//     script.onerror = function(){
//         console.log("Error while loading script :"+ url);
//         callback(new Error("src got a new error"))
//     }
//     document.body.appendChild(script)
// }
// function hello(error, url){
//     if(error){
//         console.log(error)
//         return
//     }
//     console.log("hello  "+url)
// }
// function goodmorning(error, url){
//     if(error){
//         console.log(error)
//         return
//     }
//     console.log("Good Morning" +url)
// }
// loadJavascript("https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/js/bootstrap.bundle.min.js", goodmorning)


/*
// Callbacks (Code of code with harry replit)
function loadScript(src, callback) {
    var script = document.createElement("script");
    script.src = src;
    script.onload = function() {
      console.log("Loaded script with SRC: " + src)
      callback(null, src);
    }
    script.onerror = function() {
      console.log("Error loading script with SRC: " + src);
      callback(new Error("Src got some error"))
    }
    document.body.appendChild(script);
  }
  
  function hello(error, src) {
    if (error) {
      console.log(error)
      return
    }
    alert('Hello World!' + src);
  }
  
  
  function goodmorning(error, src) {
    
    if (error) {
      console.log(error)
      sendEmergencyMessageToCeo();
      return
    }
    alert('Good morning' + src);
  }
  
  loadScript("https://cdn.jsdelivr.net/npm/bootstrap@5.2.1/dist/js/bootstrap.bundle.min.js", goodmorning)
*/




//Practice
