abstract class Parent {

    public Parent () {
        System.out.println("I am the constructor of parent class");
    }

    public void sayHello () {
        System.out.println("Hello");
    }

    abstract public void greet1 ();  // we will override these abstract method in concrete sub-class
    abstract public void greet2 ();
}

class Child1 extends Parent {  // implement all abstract method in this concrete class 

    @Override
    public void greet1 () {
        System.out.println("Good Morning");
    }

    @Override
    public void greet2 () {
        System.out.println("Good Afternoon");
    }

}

abstract class Child2 extends Parent { // do same as class Child1 else make this class to abstract 

    public void func () {
        System.out.println("This is a function");
    }
}

public class cwh_53_abstract {

    public static void main(String[] args) {
        // Parent p = new Parent(); ---> can not do because parent class in abstract class 
        Child1 c1 = new Child1(); // can do it
        c1.greet1();
        c1.greet2();
    }
}
