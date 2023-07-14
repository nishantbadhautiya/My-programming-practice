console.log("this is tut16")
let element= document.createElement("li")
let text= document.createTextNode("I am a text Node");
element.appendChild(text)

element.className= 'childul';
element.id= 'createdli'
element.setAttribute('title', 'mytitle');
// element.innerHTML= "<b>Hello this is created by Harry</b>"
let ul= document.querySelector("ul.this")
// console.log(ul)
// console.log(element)
ul.appendChild(element);

// element.appendChild(text)




let elem2= document.createElement('h3')
elem2.id= 'elem2'
elem2.className= 'elem2'
let tnode= document.createTextNode("This is created node for ele2");
elem2.appendChild(tnode)
// console.log(elem2);
element.replaceWith(elem2)


let myul= document.getElementById('myul');
myul.replaceChild(document.getElementById('fui'))
// myul.removeChild(document.getElementById('lui'))
