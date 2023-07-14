// class Animal{
//     constructor(name){
//         this.name = Animal.capitalize(name);
//     }
//     walk(){
//         console.log((this.name) + " is walking")
//     }
//     static capitalize(name){
//         return name.charAt(0).toUpperCase() + name.substr(1, name.length);
//     }
// }
// let a = new Animal("rohan");
// a.walk();




class Animal{
    constructor(name){
        this.name = Animal.capitalize(name);
    }
    walk () {
        // console.log(Animal.capitalize(this.name) + " is walking");
        console.log(this.name + " is walking");

    }
    run() {
        console.log(this.name + " is running");
    }
    static capitalize(name){
        return name.charAt(0).toUpperCase() + name.substr(1,name.length);
    }
}
// const a = new Animal(Animal.capitalize("puppy"));
const a = new Animal("doggi");
a.walk();
a.run();
