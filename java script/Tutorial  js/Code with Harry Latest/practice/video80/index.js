class Employee{
    constructor(name){
        console.log(`${name} Employee's constructor is here`)
        this.name = name;
    }
    login(){
        console.log("Employee is logged in ");
    }
    logout(){
        console.log("Employee is logged out");
    }
    requestleave(leaves){
        console.log(`Employee had requested ${leaves} leaves`);
    }
}
class Programmer extends Employee{
    // constructor(...args){   // if there is no constructor in the child class, this is automatically executes
    //     super(...args)
    // }

    constructor(name){
        super(name)
        console.log(`${name} - Programmer constructer is here. this is newly written constructor`);
        this.name = name;
    }
    requestCoffee(x){
        console.log(` Employee has requested ${x} coffees`)
    }
    //Example of function overriding
    requestleave(leaves){
        super.requestleave(leaves+1); 
        console.log(`${this.name} Programmer had granted one extra leave`)
    }
}
let e = new Programmer("Nishant");
e.login();
e.requestleave(3);