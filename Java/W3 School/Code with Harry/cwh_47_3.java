
class ParentClass {
    ParentClass () {
        System.out.println("Parent Class Called");
    }
}

class ChildClass extends ParentClass{
    ChildClass () {
        System.out.println("Child Class Called");
    }
}

public class cwh_47_3 {
    public static void main(String[] args) {
        ChildClass c = new ChildClass();

    }
}
