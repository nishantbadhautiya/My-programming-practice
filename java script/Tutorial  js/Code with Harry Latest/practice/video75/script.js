let a = {
    name: "Nishant",
    language: "Javascript",
    Subject: "Programming",
    run: () => {
        console.log("self Run");
    }
}
// console.log(a);


let p = {
    run: () => {
        console.log("Run");
    }
}
p.__proto__ = {
    other_name : "Rohan"
}
a.__proto__ = p;
a.run();
console.log(a.other_name);
