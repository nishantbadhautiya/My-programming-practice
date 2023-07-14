// console.log("we are in tut6");
const name = 'Nishant';
// const greeting ='Good Morning';
// console.log(greeting + ' '+ name);
// console.log("Good Afternoon"+ name)

let html;
html= "Nishant"+
" Badhautiya Badhautiya"
// console.log(html)
// console.log(html.concat(' kumar',' rahul'))
// console.log(html.length)
// console.log(html.toLowerCase())
// console.log(html.toUpperCase())
// console.log(html)

// console.log(html[1])


// console.log(html.indexOf('vah'))
// console.log(html.lastIndexOf('a'))
// console.log(html.length)
// console.log(html.charAt('3'))
// console.log(html.endsWith('tiya'))
// console.log(html.includes('jdf'))
// console.log(html.substring(1,4))
// console.log(html.slice(0,-6))
// console.log(html.slice(-6))
// console.log(html.substring(-6))
// console.log(html.split(' '))


console.log(html.replace('Badhautiya','kumar'))

let fruit1= 'orange';
let fruit2= 'apple';
let myhtml= `hello ${name}
            <h1> This is a Heading</h1>
            <p> you likes ${fruit1} and ${fruit2}</p>
            `;
document.body.innerHTML= myhtml

let name1= "Nishant "
let name2= 'Badhautiya'
let htmlcode= ` ${name1}
                <h1>This is Header ${name2}</h1>
                <p>this is a paragraph ${fruit1} and
                ${fruit2} </p>`;
document.body.innerHTML= htmlcode