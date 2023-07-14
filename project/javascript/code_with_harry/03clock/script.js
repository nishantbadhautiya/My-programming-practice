let hour = document.getElementsByClassName("hour")[0];
let minute = document.getElementsByClassName("minute")[0];
let second = document.getElementsByClassName("second")[0];

setInterval(() => {
    let d = new Date();
    let htime = d.getHours();
    let mtime = d.getMinutes();
    let stime = d.getSeconds();

    let hrotation = 30 * htime + mtime / 2 + stime / 120;
    let mrotation = 6 * mtime + stime / 10;
    let srotation = 6 * stime;

    hour.style.transform = `rotate(${hrotation}deg)`;
    minute.style.transform = `rotate(${mrotation}deg)`;
    second.style.transform = `rotate(${srotation}deg)`;
}, 1000);