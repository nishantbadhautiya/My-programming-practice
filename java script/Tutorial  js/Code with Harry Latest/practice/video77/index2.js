class RailwayForm {
    constructor(givenname, address, trainnumber) {
        console.log("constructor called for  " + givenname + " " + trainnumber);
        this.name = givenname;
        this.number = trainnumber;
        this.address = address;
    }
    preview() {
        console.log(`${this.name} your form for addres--> " ${this.address} " is filled and your train number is: ${this.number}`)
    }
    submit() {
        console.log(this.name + ":  Submitted your form with train number " + this.number);
    }
    cancel() {
        console.log(this.name + ":   This form is cancelled " + this.number);
        this.number = 0
    }
}
let Nishant = new RailwayForm("Nishant", "123, Nagla ramju , Sadabad, hathras ", 123);
Nishant.preview();
Nishant.submit();
Nishant.cancel();
Nishant.preview();