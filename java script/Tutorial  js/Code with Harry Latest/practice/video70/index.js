// sessionStorage.setItem("name", "nishant");
// sessionStorage.getItem("name");
// sessionStorage.clear();
// sessionStorage.key("name");
// sessionStorage.removeItem("name");


window.onstorage = (e) => {
    alert("changed");
    console.log(e);
}