// 2.   Invoking the Parent Class Constructor:

class ParentClass {
    int parentField;

    public ParentClass (int value) {
        this.parentField = value;
    }
}

class ChildClass extends ParentClass{
    int childField;

    public ChildClass (int parentValue,int childValue) {
        super(parentValue);
        this.childField = childValue;
    }

    public void getAllValue () {
        System.out.println(this.childField);
        System.out.println(super.parentField);
    }

}

public class cwh_47_2 {
    public static void main(String[] args) {
        ChildClass c = new ChildClass(10, 20);
        c.getAllValue();
    }
}
