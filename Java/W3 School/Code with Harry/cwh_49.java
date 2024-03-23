// dynamic method dispach

class Phone {

    public void showTime () {
        System.out.println("Time is 8 am ...");
    }

    public void on () {
        System.out.println("Phone is turning on ...");
    }

}

class SmartPhone extends Phone{

    public void music () {
        System.out.println("Playing music ...");
    }

    public void on () { // method overriding of polymorphism
        System.out.println("SmartPhone is turning on...");
    }

}

public class cwh_49 {
    public static void main(String[] args) {
        Phone p = new SmartPhone(); 

        /*
        * Object Creation: new SmartPhone() creates a new object of the SmartPhone class.

        * Reference Variable: Phone p declares a reference variable named p of type Phone. This means that the variable p is expected to refer to objects of type Phone or its subclasses.

        * Assignment: The = operator is used to assign the newly created SmartPhone object to the reference variable p.

        * In summary, Phone p = new SmartPhone(); creates an object of SmartPhone, assigns it to a reference variable of type Phone, and allows for polymorphic behavior, enabling dynamic method dispatch at runtime

        * it is run time polymorphism 
         */
        
        p.on();
        p.showTime();
        // p.music();  ---> not allowed 

        // SmartPhone p2 = new Phone();  ---> not allowed 

    }
}
