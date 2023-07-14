async function func(body2) {
    const url = "https://jsonplaceholder.typicode.com/users";
    const options = {
        method: "POST",
        headers: {
            "content-type": "application/json",
        },
        body: JSON.stringify(body2),
    }
    const promise = await fetch(url, options);
    const response = await promise.json();
    return response;
}
const mainFunc = async (response) => {
    const body2 = {
        name: "Nishant",
        userid: "101",
        username: "nishantbadhautiya",
        email: "nishant@badhautiya.com"
    }
    let result = await func(body2);
    console.log(result);
}
mainFunc();
