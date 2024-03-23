// Inheritance in Interface 

interface SampleInterface {
    void method1();
    void method2();
}

interface ChildSampleInterface extends SampleInterface { // inheritance of interface 
    void method3();
    void method4();
}

class SampleClass implements ChildSampleInterface {
    public void method1(){
        System.out.println("Method 1");
    }
    public void method2(){
        System.out.println("Method 2");
    }
    public void method3(){
        System.out.println("Method 3");
    }
    public void method4(){
        System.out.println("Method 4");
    }
}


public class cwh_58_inheritance_interface {
    public static void main(String[] args) {
        SampleClass sc = new SampleClass();
        sc.method1();
        sc.method2();
        sc.method3();
        sc.method4();
    }
}
