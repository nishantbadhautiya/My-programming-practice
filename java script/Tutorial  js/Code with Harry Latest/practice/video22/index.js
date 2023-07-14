function Game(compnum, usernum) {
    let trynum = 0;
    if (compnum > usernum) {
        console.log("Enter Higher Number");
        return;
    }
    else {
        console.log("Enter Lower Number");
        return;
    }
    trynum++;
}
return trynum;
let compnum = Math.floor(Math.random() * 100);
let usernum = prompt("Enter Your Number ");
console.log(compnum);
while (compnum != usernum){
    console.log(Game(compnum, usernum));
}
