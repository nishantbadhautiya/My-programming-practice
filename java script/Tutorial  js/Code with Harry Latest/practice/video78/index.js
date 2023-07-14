class Animal{
    constructor(name, color){
        this.name = name;
        this.color = color;
    }
    run(){
        console.log(this.name + " is running");
    }
    shout(){
        console.log(this.name + " is shouting");
    }
}
class Monkey extends Animal{
    eatbanana(){
        console.log(this.name + " is eating banana");
    }
    hide(){
        console.log(`${this.name} is hiding`)
    }
}
let dog = new Animal("Puppy", "black" )
let monkey = new Monkey("chimpu", "white")
// monkey.run();
monkey.hide();