// let a = document.getElementsByTagName("nav")[0];
// console.log(a.firstElementChild.firstElementChild)
// a.firstElementChild.firstElementChild.style.color = "red";
// a.firstElementChild.lastElementChild.style.color = "blue";

let a = document.getElementsByTagName("li");
console.log(a);
let b = Array.from(a);
console.log(b);
console.log(b.length)
// for(let i = 0; i < b.length; i++)
// {
//     a[i].style.background = "cyan";
// }

b.forEach(element => {
    element.style.background = "cyan";
});
