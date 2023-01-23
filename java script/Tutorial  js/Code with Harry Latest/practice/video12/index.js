//problem 01

// let marks = {
//     harry: 98,
//     rohan: 70,
//     aakash: 7
// }
// for (let i = 0; Object.keys(marks).length; i++) {
//     console.log("The Marks of " + Object.keys(marks)[i] + " are " + marks[Object.keys(marks)[i]]);
// }


// // for (let a in obj) {
// //     console.log("The marks of " + a + " is " + obj[a]);
// // }




//problem 03
// let input = 56;
// let num;
// // let i=0;
// while (input != num) {
//     num = prompt("Enter the Number");
//     console.log("Try Again");
// }
// console.log("You entered Correct Number");

const mean = (a, b, c, d, e) => {
    return (a + b + c + d + e) / 5;
}
console.log(mean(1, 2, 3, 4, 5))
