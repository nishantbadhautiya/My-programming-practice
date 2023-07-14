const globalEC = "added";
function a() {
    const variablea = 34;
    console.log(variablea);
    debugger;
    b();
    console.log("Outside of a");
    debugger;
}
function b() {
    debugger;
    console.log("Inside of b");
    c();
    debugger;
}
function c(){
    debugger;
    console.log("Inside of c");
    debugger;
}
const variableab = "99";
console.log(variableab);
debugger;
a();
