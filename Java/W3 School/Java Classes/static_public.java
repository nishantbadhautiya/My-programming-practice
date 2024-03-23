public class static_public {
    static void myStaticMethod () {
        System.out.println("This is a static Method");
    }

    public void myPublicMethod () {
        System.out.println("This is a public Method");
    }

    public static void main(String[] args) {
        myStaticMethod();
        // myPublicMethod();  // can not use. so it will generate errors 

        static_public obj = new static_public();
        obj.myPublicMethod();
        // obj.myStaticMethod();
    }
}
