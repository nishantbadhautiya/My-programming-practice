class ParentClass {
    int parentField = 20;

    public void display () {
        System.out.println("This is a Parent class");
    }

}

class ChildClass extends ParentClass {
    int childField = 30;

    public void display () {
        super.display();
        System.out.println(super.parentField);
        System.out.println("This is a child class");
        System.out.println(childField);
    }

    public void accessParentField () {
        System.out.println(super.parentField);
    }

}


public class cwh_47_1 {
    public static void main(String[] args) {
        ChildClass c = new ChildClass();
        c.display();
        c.accessParentField();
    }
}
