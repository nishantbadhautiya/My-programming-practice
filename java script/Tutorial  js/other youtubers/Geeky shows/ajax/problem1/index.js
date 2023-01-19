// // using anonymous function
// document.getElementById("btnajax").addEventListener("click", makerequest);
// function makerequest(){
//     console.log("Button clicked")
//     const xhr = new XMLHttpRequest();
//     xhr.open("GET", "data.txt", true);
//     xhr.onreadystatechange = function(){
//         if(xhr.readyState === XMLHttpRequest.DONE){
//             if(xhr.status == 200){
//                 console.log(xhr);
//                 console.log(xhr.responseText);
//             }
//             else{
//                 console.log("Problem occurred");
//             }
//         }
//     }
//     xhr.send();
// }




// using arrow function
document.getElementById("btnajax").addEventListener("click", makerequest);
function makerequest(){
    console.log("Button clicked")
    const xhr = new XMLHttpRequest();
    xhr.open("GET", "data.txt", true);
    xhr.onreadystatechange = () => {
        if(xhr.readyState === 4){
            if(xhr.status == 200){
                console.log(xhr);
                console.log(xhr.responseText);
            }
            else{
                console.log("Problem occurred");
            }
        }
    }
    xhr.send();
}