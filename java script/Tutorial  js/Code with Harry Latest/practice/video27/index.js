// alert("Enter the value of a: ");
let a = prompt("Enter  Number here", 200);
// console.log(a);
// document.write(a);
a= Number.parseInt(a);
alert("You Typed a of type "+ (typeof a));
let write = confirm("Do you want to write it on page");
if(write){
    document.write(a);
}
else{
    document.write("Please allow me to write");

}