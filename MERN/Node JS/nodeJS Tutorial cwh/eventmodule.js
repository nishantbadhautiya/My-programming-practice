const EventEmitter = require('node:events');

class MyEmitter extends EventEmitter { }

const myEmitter = new MyEmitter();   // cration of a new event emitter
myEmitter.on('WaterFull', () => {
    console.log('Please Turn off the Motor! '); // this code will execute when WaterFull event will got fire
    setTimeout(() => {
        console.log("Please Turn off the Motor! Its a gentle Reminder ");
    }, 2000);
});
console.log("The Script is Running");
myEmitter.emit('WaterFull');  // event got emit(get out from something) means event will fire 
console.log("The Script is still Running");
myEmitter.emit('WaterFull');  
