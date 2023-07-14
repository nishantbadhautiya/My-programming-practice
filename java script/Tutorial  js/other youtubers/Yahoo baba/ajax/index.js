function loadData() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "https://jsonplaceholder.typicode.com/photos", true);
    xhttp.onreadystatechange = function () {
        if (this.readyState == 4 && this.status == 200) {
            console.log(this.responseText);
            // document.getElementById("demo").innerHTML = this.responseText;
        }
        else if (this.readyState == 4 && this.status == 404) {
            document.getElementById("demo").innerHTML = "File not Found";
        }
    }
    xhttp.send();
}