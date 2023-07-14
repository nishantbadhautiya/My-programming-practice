//Question 1 and 2 of practice set

// class Complex {
//     constructor(real, imaginary) {
//         this.real = real;
//         this.imaginary = imaginary;
//     }
//     add(num) {
//         this.real = this.real + num.real;
//         this.imaginary = this.imaginary + num.imaginary;
//     }
// }
// let a = new Complex(3, 4);
// let b = new Complex(1, 2);
// a.add(b);
// console.log(`${a.real}+${a.imaginary}i`);


// Question 3

// class Human{
//     constructor(name, favfood) {
//         this.name = name ;
//         this.favfood = favfood;
//     }
//     walk(){
//         console.log(this.name + " Human can walk");
//     }
// }
// class Student extends Human{
//     walk(){
//         console.log(this.name + " student can walk");
//     }
//     read(){
//         console.log("student can read");
//     }
// }
// let a = new Student("Rohan", "chaval");
// a.walk();
// console.log(a instanceof Human );



//Question 5
class Complex {
    constructor(real, imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }
    add(num) {
        this.real = this.real + num.real;
        this.imaginary = this.imaginary + num.imaginary;
    }
    get real(){
        return this._real
    }
    get imaginary(){
        return this._imaginary;
    }
    set real(newreal){
        this._real = newreal;
    }
    set imaginary(newimaginary){
        this._imaginary = newimaginary;
    }
}
let a = new Complex(3, 4);
console.log(a.real, a.imaginary)
a.real = 10;
a.imaginary = 16;
console.log(a.real, a.imaginary)

let b = new Complex(1, 2);
a.add(b);
console.log(`${a.real}+${a.imaginary}i`);