// console.log($);
// console.log(jQuery); 

// jQuery Syntax looks like this
// $('selector').action()      //syntax of jQuery

//****************************************** */

// $('p').click();
// $('p').click(function () {
//     console.log("you clicked on paragraph")
//     // $('p').hide();
//     $(this).hide();
// });


//********************************************* */
// Document Ready Event    --> when our hide function runs before loading of our document so it creates an issue so we use ready event in javascript.

// $(document).ready(function () { // when document get ready run below code or we can use $(function (){//code}
//     // your jquery code here   ----> example of element selector
$('p').click(function () {
    console.log("you clicked on paragraph", this)    // here this gives the element of dom
    // $(this).hide();
});
// })



// *******************************************************

// There are three main types of selector in jQuery
// 1.  Element selector
// 2.  ID selector 
// 3.  Class Selector

// 1.   Element Selector
// $('p').click();

// 2.   ID selector
// $('#second').click();

// 3.   Class Selector
// $('.third').click();



// Other Selector
// $('*').click();    // select all the elements
// $('p.odd').click();    // select all paragraph with class name of 'odd'
$('p:first').click();     // clicks(or select) on first paragraph




//************************************************************************* */

$(document).ready(function(){
    console.log("we are now in new file");
    $('p').click(function(){
        console.log("you clicked on paragraph", this);
    })
});
