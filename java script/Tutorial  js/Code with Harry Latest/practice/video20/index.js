let arr = [12, 36, 71, 27, 37];
// arr.forEach((Element , index, Arry) => {
//     console.log(Element , index, Arry);
// });

// let a = arr.map((element, index, array) =>{
//     console.log(element , index , array);
//     return element+index;
// })
// console.log(a);

//filter method
// let arr2 = [45, 23, 31, 0, 3,6 ]
// let newarr = arr2.filter((element) =>{
//     return element<=10;
// })
// console.log(newarr);


//reduce method
// let newarr2 = arr2.reduce((element1, element2)=>{
    //     return element1 - element2;
    // })
    // console.log(newarr2);
    
// let reduce_func = (element1, element2) =>{
//     return element1 + element2;
// }
// let newarr3 = arr2.reduce(reduce_func)
// console.log(newarr3);
        
let arr2 = [5, 2, 1, 0, 3, 6 ]
let  reduce_func = (element1, element2) =>{
    return element1 + element2;
}
let newarr = arr2.reduce(reduce_func);
console.log(newarr);