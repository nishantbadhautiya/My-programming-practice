let a = document.getElementsByTagName("div")[0];
console.log(a);
// a.innerHTML = a.innerHTML + "<h1>Hello Javascript</h1>"
let  div = document.createElement('div');
div.className = "Rohan";
div.innerHTML = "<h1>This is heading 1</h1>"
// document.body.before(div);
// a.after(div);
a.replaceWith(div);