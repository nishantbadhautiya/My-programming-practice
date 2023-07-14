// console.log("hello");
// console.log(console);
// console.error("This is an error");
// console.error("this is also error");
// console.warn("this is Warning");
// console.info("This is important information");
// console.log("Hii");

console.time("Time of for loop");
for(let i= 0; i<=5000; i++)
{
    console.log("Hii");
}
console.timeEnd("Time of for loop");

console.time("while loop")
let i= 0;
while(i<=5){
    console.log("Hii");
    i++;
}
console.timeEnd("while loop");