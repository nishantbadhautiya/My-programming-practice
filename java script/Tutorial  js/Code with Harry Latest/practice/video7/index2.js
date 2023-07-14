let a = prompt("Enter your age");
console.log(a);
if (a < 0) {
  alert("This is a invalid age");
} 
else if(a>0 && a<9)
{
    alert("you can not think of driving");
}
else if (a>=9 && a<18) {
    alert("You can think of driving");
}
else {
  alert("you can drive");
}
