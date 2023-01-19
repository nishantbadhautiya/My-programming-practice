let url = "https://jsonplaceholder.typicode.com/users";
function myAxios(method, url) {
    let xhr = new XMLHttpRequest();
    xhr.open(method, url, true);
    xhr.onload = () => {
        // console.log(xhr.response);
        console.log(JSON.parse(xhr.response));
    }
    xhr.send();
}
myAxios("GET", url);