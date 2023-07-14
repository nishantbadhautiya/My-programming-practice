// Slide methods - speed and callback parameters are optional

// $('#wiki').slideUp(1000, function(){
//     console.log("Slide down done");
// });
// $('#wiki').slideDown(1000);
// $('#wiki').slideToggle(1000);

//********************************************************************** */

// Animate function in JQuery
// $('#wiki').animate({
//     opacity: 0.3,
//     height : '150px',
//     width : '350px',
// }, 2000);

// $('#wiki').animate({
//     opacity: 0.3,
//     height : '150px',
//     width : '350px',
// }, 'slow');

// $('#wiki').animate({
//     opacity: 0.3,
//     height : '150px',
//     width : '350px',
// }, 'fast');


// Execution in row 
// $('#wiki').animate({opacity : 0.3}, 4000);
// $('#wiki').animate({opacity : 0.9}, 2000);
// $('#wiki').animate({width : '350px'}, 3000);
// $('#wiki').stop()    // used to stop the animation try to use it into console



//********************************************************************** */
// use HTML with jQuery (change DOM)

// $('#wiki').text();   // return the text
// $('#wiki').text('I am Nishant');   //set text to 'I am Nishant;
// $('body').html('<h1>This is a heading</h1>');   // set html
// console.log($('#ta').val());   // gives the value of text area
// $('#inp').val('i am changing the value of input area');  
// $('#wiki').empty();    // empty the content inside an element of the dom
// $('#wiki').text("you are good");
// $('#wiki').remove();    // completely removes the element from the dom



//********************************************************************** */
//Setting the CSS of an Element
// $('#wiki').addClass('myClass');
// $('#wiki').addClass('myClass2');
// $('#wiki').removeClass('myClass2');
// $('#wiki').css('background-color', 'red');
// console.log($('#wiki').css('background-color'));



//********************************************************************** */
  // AJAX Using jQuery
  // art of exchanging data with a server without reloading the page

// console.log($.get('https://code.jquery.com/jquery-3.6.4.js'));
// console.log($.get('https://code.jquery.com/jquery-3.6.4.js',function(data, status){
//     console.log(data);
//     console.log(status);
// }));

// POST Request not allowed
console.log($.post('https://code.jquery.com/jquery-3.6.4.js'),{
    name : "Nishant",
    type : "Web Developer",
},function(data, status){
    // console.log(data);
    console.log(status);
})
