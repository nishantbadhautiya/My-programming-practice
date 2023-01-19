document.getElementById("btnajax").addEventListener("click", makerequest);
function makerequest(){
    console.log("Button clicked 2");
    const xhr = new XMLHttpRequest();
    xhr.open("GET", "../problem1/data.txt", true);  //calling open method
    xhr.onreadystatechange = () => {
        if(xhr.readyState === XMLHttpRequest.DONE){
            if(xhr.status === 200){
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