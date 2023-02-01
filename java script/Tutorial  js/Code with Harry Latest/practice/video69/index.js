// let key = prompt("Enter key you want to set");
// let value = prompt("Enter value you want to set ");
// localStorage.setItem(key, value);
// console.log(`the value at ${key} is ${localStorage.getItem(key)}`);


let key = prompt("Enter key you want to set");
let value = prompt("Enter value you want to set ");
localStorage.setItem(key, value);
console.log(`the value at ${key} is ${localStorage.getItem(key)}`);
if(key == "hello" || key == "hii"){
    localStorage.removeItem(key);
}
if(key == 0){
    localStorage.clear();
}

localStorage.length;   //return the length of local storage
localStorage.key(0);   // return the key at index 0 of our local storage
localStorage.clear();    // clears the local storage


// let obj = JSON.stringify({
//     name : "nishant",
//     class : "23th",
//     father : "vinod"
// })
// localStorage.setItem("object", obj);