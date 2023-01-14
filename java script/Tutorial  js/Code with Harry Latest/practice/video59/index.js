// async function hello(){
//     return "hii";
// }
// hello().then((value)=>{
//     console.log(value);
// })



// async function weather() {
//     let delhiweather = new Promise((resolve, reject) => {
//         setTimeout(() => {
//             resolve("27 deg");
//         }, 2000);
//     })
//     let bangloreweather = new Promise((resolve, reject) => {
//         setTimeout(() => {
//             resolve("21 deg");
//         }, 5000);
//     })
//     // delhiweather.then(console.log)
//     // bangloreweather.then(console.log)
//     console.log('fetching delhi weather please wait...');
//     let delhiwea = await delhiweather
//     console.log('fetched delhi weather :' + delhiwea);
//     console.log('fetching banglore weather please wait...');
//     let banglorewea = await bangloreweather
//     console.log('fetched banglore weather :' + banglorewea);
//     return [delhiwea, banglorewea]
// }
// const cherry = async () => {
//     console.log('hey! I am cherry and i am waiting of you');
// }
// console.log('welcome to weather control room');
// const main1 = async() => {
//     let a = await weather()
//     let b = await cherry()
// }
// main1()




// async function nishant() {
//     let delhiweather = new Promise((resolve, reject) => {
//         setTimeout(() => {
//             resolve("27 deg");
//         }, 2000);
//     })
//     let bangloreweather = new Promise((resolve, reject) => {
//         setTimeout(() => {
//             resolve("21 deg");
//         }, 4000);
//     })
//     // delhiweather.then(console.log);
//     // bangloreweather.then(console.log);
//     console.log("fetching delhi weather, please wait....");
//     let delhiw = await delhiweather;
//     console.log("fetched delhi weather: " + delhiw);

//     console.log("fetching banglore weather, please wait....");
//     let banglorew = await bangloreweather;
//     console.log("fetched banglore weather: " + banglorew);
//     return [delhiw, banglorew];
// }
// console.log("welcome to weather control room: ");
// let a = nishant();
// a.then((value)=>{
//     console.log(value);
// })









async function nishant() {
    let delhiweather = new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve("27 deg");
        }, 2000);
    })
    let bangloreweather = new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve("21 deg");
        }, 4000);
    })
    // delhiweather.then(console.log);
    // bangloreweather.then(console.log);
    console.log("fetching delhi weather, please wait....");
    let delhiw = await delhiweather;
    console.log("fetched delhi weather: " + delhiw);

    console.log("fetching banglore weather, please wait....");
    let banglorew = await bangloreweather;
    console.log("fetched banglore weather: " + banglorew);
    return [delhiw, banglorew];
}
const cherry = async() => {
    console.log("Hey! i am cherry and i am now  waiting");
}
const main1 = async() => {
    console.log("welcome to weather control room: ");
    let a = await nishant();
    let b = await cherry();
}
main1();