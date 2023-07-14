// let arr = [3,4, 7];
// let [a,b] = arr;

// //No need to do this
// // let a = arr[0];
// // let b = arr[1];

// console.log(a);
// console.log(b);






// let arr = [3, 4, 7, 8, 12, 15, 23, 35, 41, 266];
// let [a, b, c, d, ...rest] = arr;
// console.log(a);
// console.log(b);
// console.log(c);
// console.log(d);
// console.log(rest);
// // console.log(a, b, c, d, rest);





// let arr = [3, 4, 7, 8, 12, 15, 23, 35, 41, 266];
// let [a, , , , ...rest] = arr;
// console.log(a, rest);




// let arr = [3, 4, 7, 8, 12, 15, 23, 35, 41, 266];
// let [a, , b, , ...rest] = arr;
// console.log(a, b, rest);



// let { a, b } = { a: 12, b: 38 };
// console.log(a, b);




// const obj = { a: 13, b: 33 };
// const { a, b } = obj;
// console.log(a, b);





//            SPREAD OPERATOR




// let arr1 = [2,4,6,7];
// let obj1 = {...arr1};
// console.log(obj1);




// let arr1 = [2,5,6];
// function sum(v1, v2, v3){
//     return v1+v2+v3;
// }
// console.log(sum(...arr1));




let obj2 = {
    name : "Nishant",
    company : "company xyz",
    address : "XYZ"
}
// console.log({...obj2, name:"Aman"});
console.log({...obj2, name:"Aman", company:"ABC"});
// console.log({name:"Rohan", company:"XYZ", ...obj2});  //This will print obj2 object without changing any value.
