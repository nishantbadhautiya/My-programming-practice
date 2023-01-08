function Game(compinput, userinput){
    if (compinput == "sc" && userinput == "s") {
        return 0;
    }
    if (compinput == "wc" && userinput == "w") {
        return 0;
    }
    if (compinput == "gc" && userinput == "g") {
        return 0;
    }
    if (compinput == "sc" && userinput == "w"){
        return -1;
    }
    if(compinput == "wc" && userinput == "g"){
        return -1;
    }
    if(compinput == "gc" && userinput == "s"){
        return -1;
    }
    if(compinput == "sc" && userinput =="g"){
        return 1;
    }
    if(compinput == "wc" && userinput =="s"){
        return 1;
    }
    if(compinput == "gc" && userinput =="w"){
        return 1;
    }
}
let compinput = Math.floor(Math.random() * 3) + 1;
compinput = Number.parseInt(compinput);
// console.log(compinput)
// let s, w, g, sc, wc, gc;
if (compinput == 1) {
    compinput = "sc";
}
if (compinput == 2) {
    compinput = "wc";
}
if (compinput == 3) {
    compinput = "gc";
}
let userinput = prompt("Enter your Input (s, w or g): ");
// let userinput = "s";
let result = Game(compinput, userinput);
if (result == 1) {
    console.log("You Win! ");
}
else if (result == 0){
    console.log("Game got tie! ")
}
else if(result == -1){
    console.log("You Lose! ");
}