class RailwayForm {
    submit() {
        console.log(this.name + ":  Submitted your form with train number "+ this.number) ;
    }
    cancel() {
        console.log(this.name + ":   This form is cancelled "+ this.number);
    }
    fill(givenname, trainnumber){
        this.name = givenname;
        this.number = trainnumber;
    }
}
//filling the form of nishant
let nishantform = new RailwayForm();
nishantform.fill("Nishant", 12345);
nishantform.submit();
nishantform.cancel();
// filling the form of Rohan
let rohanform1 = new RailwayForm();
let rohanform2 = new RailwayForm();
rohanform1.fill("Rohan", 12346);
rohanform2.fill("Rohan", 12347);
rohanform1.submit();
rohanform2.submit();
rohanform1.cancel();

