let t = document.getElementById("time")
setInterval(() => {
    let d = new Date();
    t.innerHTML = d.toTimeString();
}, 1000);