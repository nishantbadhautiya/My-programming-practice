//problem 1 
// let arr = [3, 26, 62, 17, 77];
// let element;
// do {
//     element = prompt("Enter New Element: ");
//     element = Number.parseInt(element);
//     arr.push(element);
// } while (element!=0);
// console.log(arr);

// //problem 3;
// let arr = [3, 26, 62, 17, 77, 20, 50];
// let newarr = arr.filter((element) => {
//     // if (element % 10 == 0) {
//     //     return element;
//     // }  
//     return (element%10 == 0);
// })
// console.log(newarr);


//problem 4
// let arr = [3, 26, 62, 17, 77, 20, 50];
// let square_arr = arr.map((Element) => {
//     return(Element * Element);
// })
// console.log(square_arr);


let arr = [1,2,3];
let fact = arr.reduce((element1, element2)=>{
    return element1*element2;
})
console.log(fact);