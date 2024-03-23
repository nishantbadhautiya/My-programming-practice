public class Main{
    static void myMethod2 () {
        System.out.println("Inside Main Class ");
    }
    public static void main(String[] args) {
        class_object obj1 = new class_object();
        class_object obj2 = new class_object();
        System.out.println(obj1.x);
        System.out.println(obj2.x);
        obj1.x = 20;
        System.out.println(obj1.x);
        System.out.println(obj2.x);
        System.out.println(obj1.fname + " " + obj2.lname);
        obj1.myMethod();
        
        myMethod2();
    }
}
