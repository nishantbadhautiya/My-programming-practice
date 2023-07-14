// let p = fetch("https://goweather.herokuapp.com/weather/banglore");
// p.then((value) => {
//     return value.json();
// }).then((value) => {
//     console.log(value);
// })





// let p = fetch("https://goweather.herokuapp.com/weather/banglore")
// p.then((value1)=>{
//     console.log(value1.status);
//     console.log(value1.ok);
//     // return value1.text();
//     return value1.json();
// }).then((value2)=>{
//     console.log(value2);
// })


let p = fetch("https://goweather.herokuapp.com/weather/ny")
p.then((response)=>{
    console.log(response.status);
    console.log(response.ok);
    console.log(response.headers)
    // console.log(response.text());
    return response.json();
}).then((value2)=>{
    console.log(value2);
})
