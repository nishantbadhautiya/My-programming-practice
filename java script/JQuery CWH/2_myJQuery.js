// Event in jQuery

// Events in jQuery
// Mouse events = click, dblclick, mouseenter, mouseleave, mousedown(any left/right click of mouse), mouseup(event will fire when we leave any button of mouse), hover(on doing hover of mouse pointer it executes two time when pointer enter and leave the element )

// KeyboardEvent = keypress, keydown, MediaKeyStatusMap
// form events = submit, change, focus, blur
// document/window events = load, resize, scroll, unload




// $(document).ready(function () {
//     console.log('we are using jQuery');
//     $('p').hover(function () {
//         console.log("you doubled clicked on p  ", this);
//         console.log("Thank for coming");
//     })
// })



// Demoing the on method
// i can attach multiple event handler using 'on'
$('p').on({
    click: function () {
        console.log("Thanks for clicking ", this);
        // $('#wiki').hide(1000, function () {
        //     console.log("hidden");
        // });

    },
    mouseleave: function () {
        console.log("thanks for mouse leave");
        // $('#wiki').show(1000, function () {
        //     console.log("show");
        // });
    }
})


// $('#wiki').hide(1000, function () {
//     console.log("hidden");
// });
// $('#wiki').show(1000, function () {
//     console.log("show");
// });


$('#beauty').click(function(){
    $('#wiki').toggle(1000);
})



// fadeIn()
// fadeOut()
// fadeToggle()
// fadeTo()

$('#beauty').click(function(){
    $('#wiki').fadeIn(5000, function(){
        console.log("fade in successfully");
    });
})
