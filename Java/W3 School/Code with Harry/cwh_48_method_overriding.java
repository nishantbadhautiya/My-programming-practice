// Method Overriding in JAVA

class A {
    public void method1 () {
        System.out.println("This is method 1 of Class A");
    }

    public void method2 () {
        System.out.println("This is method 2 of Class A");
    }
}

class B extends A{

    @Override
    public void method1 () { // Method overriding
        System.out.println("This is method 1 of Class B");
    }

    public void method3 () {
        System.out.println("This is method 3 of Class B");
    }
}

public class cwh_48_method_overriding {
    public static void main(String[] args) {
        // A a = new A();
        // a.method1();
        // a.method2();
    
        B b = new B();
        b.method1();
        b.method3();
    }
}
