let url = "https://kontests.net/api/v1/all";
let response = fetch(url);
response.then((value)=>{
    return value.json();
}).then((contest)=>{
    console.log(contest);
    for(items in contest){
        console.log(contest[items]);
    }
})
cardcont = document.getElementById("cardcontainer");
// cardcont.innerHTML = "allcards";