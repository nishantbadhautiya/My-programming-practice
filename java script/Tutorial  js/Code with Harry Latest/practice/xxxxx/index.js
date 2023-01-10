function loadscript(src) {
    let script = document.createElement("script");
    script.src = src;
    script.onload = function () {
        console.log("script loaded with src: " + src);
    }
    document.body.appendChild(script);

}

loadscript("https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/js/bootstrap.bundle.min.js")