
// Closure in javascript

// message = "good global";
// function hello1() {
//     let message = "good morning";
//     {
//         let message = "good afternoon";
//         console.log("Hello 1   " + message);
//     }
//     let c = function hello2() {
//         console.log("I am c" + message);
//     }
//     return c;
// }
// c = hello1();
// c();
// // output:->  // hello1 good afternoon
//               //i am c good morning






// function init(){
//     var name = "mozilla";
//     function displayname(){
//         // displayname();
//         console.log(name);
//     }
//     name = "Harry";
//     return displayname;
// }
// let c = init();
// c();
// // output:->  //Harry





function returnFunc() {
    const x = () => {
        let a = 1;
        console.log(a);
        const y = () => {
            // let a = 2;
            console.log(a);
            const z = () => {
                // let a = 3;
                console.log(a);
            }
            z();
        }
        a = 999;
        y();
    }
    return x;
}
let a = returnFunc();
a();

// output : =>  // 1
                //999
                //999


