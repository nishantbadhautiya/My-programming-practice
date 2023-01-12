class Employee{
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
    requestCoffee(x){
        console.log(`Employee has requested ${x} coffees`)
    }
    //Example of function overriding
    requestleave(leaves){
        super.requestleave(leaves+1); 
        console.log("Programmer had granted one extra leave")
    }
}
let e = new Programmer;
e.login();
e.requestleave(3);