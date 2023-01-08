// let d = new Date()
// console.log(d);
// let h = d.getHours();
// let m = d.getMinutes();
// let s = d.getSeconds();
// console.log(h, m ,s);



// setInterval(() => {
//     let d = new Date()
//     let h = d.getHours();
//     let m = d.getMinutes();
//     let s = d.getSeconds();
//     document.write(h+":"+ m+":"+ s +"\n");
// }, 1000);


function currentTime() {
  let date = new Date(); 
  let hh = date.getHours();
  let mm = date.getMinutes();
  let ss = date.getSeconds();
  let session = "AM";

    
  if(hh > 12){
      session = "PM";
   }

   hh = (hh < 10) ? "0" + hh : hh;
   mm = (mm < 10) ? "0" + mm : mm;
   ss = (ss < 10) ? "0" + ss : ss;
    
   let time = hh + ":" + mm + ":" + ss + " " + session;

  document.getElementById("clock").innerText = time; 
  var t = setTimeout(function(){ currentTime() }, 1000); 

}

currentTime();
