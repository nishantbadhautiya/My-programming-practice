//Question 1
// const loadscript = async (src) => {
//     return new Promise((resolve, reject) => {
//         script = document.createElement("script");
//         script.src = src;
//         document.body.appendChild(script);
//         script.onload = () => {
//             resolve(src+ "  done success");
//         }
//     });
// }
// let a  = loadscript("https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/js/bootstrap.bundle.min.js");
// a.then((value)=> {
//     console.log(value);
// })




// Question 2
// const loadscript = async (src) => {
//     return new Promise((resolve, reject) => {
//         script = document.createElement("script");
//         script.src = src;
//         document.body.appendChild(script);
//         script.onload = () => {
//             resolve(src+ "  done success");
//         }
//     });
// }
// const main1 = async() => {
//     console.log(new Date().getMilliseconds());
//     let a = await loadscript("https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/js/bootstrap.bundle.min.js");
//     console.log(new Date().getMilliseconds());
//     console.log(a);
// }
// main1();




//Question 3
// function hello() {
//     return new Promise((resolve, reject) => {
//         setTimeout(() => {
//             reject(new Error("Please this is not acceptable"));
//         }, 3000);
//     })
// }
// const a = async () => {
//     try {
//         let a = await hello();
//         console.log(a);
//     } catch (error) {
//         console.log("handled error: " + error);
//     }finally{
//         console.log("finally ended ");
//     }
// }
// a();




// Question 4

async function x() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve("value 1");
        }, 1000);
    })
}
async function y() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve("value 2");
        }, 2000);
    })
}
async function z() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve("value 3");
        }, 3000);
    })
}
const run = async () => {
    console.time("Run");
    let a1 = x();
    let a2 = y();
    let a3 = z();
    let promise_all = await Promise.all([a1, a2, a3]);
    console.log(promise_all);
    console.timeEnd("Run");
}
run();