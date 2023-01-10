let option = {
    method : "POST",
    Headers : {
        "content-type" : "application/json"
    },
    body: JSON.stringify({
        title: 'foo',
        body: 'bar',
        userId: 1,
      }),
}
fetch('https://jsonplaceholder.typicode.com/posts',option)
  .then((response) => response.json())
  .then((json) => console.log(json));