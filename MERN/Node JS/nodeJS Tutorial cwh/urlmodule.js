import url from 'node:url';

const myURL = new URL('https://example.org:8000');
myURL.pathname = '/a/b/c';
myURL.search = '?d=e';   // get parameter
myURL.hash = '#fgh';     // url hash used when i wants to nevigate in particular section of our page

console.log(myURL);
console.log(myURL.href);
