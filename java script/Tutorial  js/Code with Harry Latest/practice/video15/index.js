//problem 1
// console.log("Har\"".length);

//problem 2
// let name1 = "Nishant";
// console.log(name1);
// console.log(name1.includes("s"));
// console.log(name1.startsWith("N"));
// console.log(name1.endsWith("T"));
// let sentence = "Nishant is a good Boy";
// let word = "gooj";
// console.log(`${word} ${sentence.includes(word)? "is":"is not "} in the sentence`);



//problem 3
// console.log(sentence.toLowerCase(sentence));

//problem 4
// let sentence = "please give rs 1000";
// let amount = sentence.slice("please give rs ".length);
// console.log(amount);
// console.log(typeof(amount))
// amount = Number.parseInt(amount);
// console.log(typeof(amount))


//problem 5
let name1 = "Nishant";
// name1[2] = 'd';
name1.replace(name1[2],'d')  //name1 is not change, because string is immutable.
console.log(name1);