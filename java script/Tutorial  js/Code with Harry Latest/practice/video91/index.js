//Arrow function in javascript


// const sayHello = () => {
//     console.log("Hello");
// }
// sayHello();


// const sayHello = (name) => console.log("Hello " + name); 
// sayHello("Nishant");


// const sayHello = name => console.log("Hello " + name); 
// sayHello("Nishant");


// const sayHello = (name, greet) => console.log(greet + " " + name); //necessary to have brackets  when we have two or more parameters
// sayHello("Nishant", "Good Afternoon");

//********************************************************************************************* */

// const x = {
//     name: "Nishant",
//     role: "js developer",
//     exp: 20,
//     show: function () {
//         console.log(this);
//         const that = this;
//         setTimeout(function () {
//             console.log(this);
//             console.log(`My name is : ${that.name} \nThe role is: ${that.role}`);
//         }, 2000);
//     }
// }
// x.show();

// if i wants to use this then i use arrow function in child function this problem is solved by arrow function

const x = {
    name: "Nishant",
    role: "js developer",
    exp: 20,
    show: function () {
        console.log(this);
        setTimeout(() => {
            console.log(this);
            console.log(`My name is : ${this.name} \nThe role is: ${this.role}`);
        }, 2000);
    }
}
x.show();
