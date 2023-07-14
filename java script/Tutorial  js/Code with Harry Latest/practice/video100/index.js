function readfile() {
    return new Promise((resolve, reject) => {
        let xhr = new XMLHttpRequest();
        xhr.open("GET", "readme.txt", true);
        xhr.onreadystatechange = (() => {
            if (xhr.readyState == 4 && xhr.status == 200) {
                console.log(xhr.responseText());
            }
        })
    }
    )
}
readfile();