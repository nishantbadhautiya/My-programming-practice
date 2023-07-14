myJson = `{
    "name": "Harry",
    "score": 11.53,
    "isAdmin": false,
    "licence" : null,
    "shopItem" : ["food", "clothes", "sunflower oil"],
    "myObj" : {
        "name" : "nested",
        "marks" : 45,
        "shopItem2" : ["food", "clothes", {"a" : true}]
    }
}`;
const parsed = JSON.parse(myJson);
console.log(parsed);  
console.log(parsed["name"]);     // Harry
console.log(parsed["shopItem"][2])    // sunflower oil
console.log(parsed["myObj"]["shopItem2"][2]['a'])      // true
