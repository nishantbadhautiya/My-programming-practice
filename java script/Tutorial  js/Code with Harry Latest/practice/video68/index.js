// console.log(document.cookie);
// document.cookie = "name : nishant101"
// document.cookie = "name2 : nishant102"
// document.cookie = "name : nishant badhautiya"
// let key = prompt("Enter your key ");
// let value = prompt("Enter your value ");
// document.cookie = (`${key} = ${value}`);
// console.log(document.cookie);


console.log(document.cookie);
document.cookie = "name : nishant101"
document.cookie = "name2 : nishant102"
document.cookie = "name : nishant badhautiya"
let key = prompt("Enter your key ");
let value = prompt("Enter your value ");
document.cookie = `${encodeURIComponent(key)} = ${encodeURIComponent(value)}`
console.log(document.cookie);

/*  console.log(decodeURIComponent("%3D%3D"));   */