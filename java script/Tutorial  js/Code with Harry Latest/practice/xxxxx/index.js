console.log(document.cookie);
document.cookie = "name : nishant"
document.cookie = "mother : lalita"
document.cookie = "grandfather : shivdev"
let key = prompt("Enter the key ");
let value = prompt("Enter the value ");
document.cookie = `${encodeURIComponent(key)} = ${encodeURIComponent(value)}`;
console.log(document.cookie);