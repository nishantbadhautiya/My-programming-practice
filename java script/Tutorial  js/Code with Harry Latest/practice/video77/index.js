class RailwayForm {
    constructor(givenname, trainnumber){
        console.log("constructor called for  "+ givenname+ " " + trainnumber);
        this.name = givenname;
        this.number = trainnumber;
    }
    submit() {
        console.log(this.name + ":  Submitted your form with train number "+ this.number) ;
    }
    cancel() {
        console.log(this.name + ":   This form is cancelled "+ this.number);
    }
}
//filling the form of nishant
let nishantform = new RailwayForm("Nishant", 123);
nishantform.submit();


// filling the form of Rohan
let rohanform = new RailwayForm("Rohan", 124);
rohanform.submit();