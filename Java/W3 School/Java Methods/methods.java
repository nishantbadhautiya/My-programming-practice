public class methods {
    static void myMethod() {
        System.out.println("I just got executed");
    }
    static void myMethod2(String name) {
        System.out.println("Hello "+  name);
    }
    static void myMethod3(String name, int age){
        System.out.println(name + " is " + age + " years old.");
    }
    static int sum(int a, int b){
        int sum = a + b;
        return sum;
    }

    public static void main(String[] args) {
        myMethod();
        myMethod();
        myMethod();
        myMethod2("Nishant");
        myMethod3("Nishant", 23);
        int ans = sum(4, 5);
        System.out.println(ans);
    }
}
