// // console.log("Hello");
// // let a = [1,2,3,4];
// let marks = [23,51,26,73, null , false ,true , "Not Present"];
// // console.log(marks)
// // console.log(marks[0])
// // console.log(marks[1])
// // console.log(marks[2])
// // console.log(marks[3])
// // console.log(marks[4])
// // console.log(marks[55])  //will be undefined because index does not exist
// marks[1] = 99;
// console.log("The lenght of marks of class 12 is",marks.length);
// console.log(marks)
// console.log(typeof marks);


// let arr = [34,61,61,77, true , false , "Nishant", null , undefined];
// for(let i=0 ; i<arr.length; i++)
// {
//     console.log(arr[i]);
// }



let obj = {
    Name: "Nishant",
    Class: 12,
    Section: 'A',
    Present: true,
    Absent: null
}
// for(let i in obj)
// {
//     console.log(obj[i]);
// }
let sum = (a, b) => {
    return a + b;
}
let a = 3;
let b = 8;
let c = sum(a, b);
console.log(c);