// class Animal{
//     constructor(name){
//         this._name = name;
//     }
//     fly(){
//         console.log("I am flying");
//     }
//     get name(){
//         return this._name;
//     }
//     set name(newname){
//         this._name = newname;
//     }
// }
// let a = new Animal("Birds");
// a.fly();
// console.log(a.name);
// a.name = "Rohan";
// console.log(a.name);
 
// let c = 34;
// console.log(c instanceof Animal);
// console.log(a instanceof Animal);













class Animal{
    constructor(name){
        this._name = name;
    }
    fly(){
        console.log(this.name + " am flying");
    }
    get name(){
        return this._name;
    }
    set name(newname){
        this._name = newname;
    }
}
class Rabbit extends Animal{
    eatcarrot(){
        console.log(this.name + " eating carrot");
    }
}
let a = new Animal("Birds");
a.fly();
console.log(a.name);
a.name = "Rohan";
console.log(a.name);
 
let c = 34;
console.log(c instanceof Animal);
console.log(a instanceof Animal);

let r = new Rabbit("kuttu");
r.eatcarrot();
console.log(r instanceof Rabbit)
