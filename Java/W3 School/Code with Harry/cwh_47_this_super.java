// 1.  Accessing Fields or Methods of the Parent Class:

class EkClass {
    int a;

    int getA () {
        return a;
    }

    public void func(EkClass obj){
        System.out.println(obj);
    }

    // public EkClass() {
    //     System.out.println("I am a constructor of EkClass");
    // }

    public EkClass(int v ) {
        System.out.println("Reference of the this object is: " + this);
        this.a = v;
        func (this);
    }
}

class DoClass extends EkClass{
    public DoClass (int x) {
        super(x);
        System.out.println("I am a constructor of DoClass");
    }
}

public class cwh_47_this_super {

    public static void main(String[] args) {
        /*
        EkClass e1 = new EkClass(34);
        System.out.println(e1);
        System.out.println(e1.a);
        System.out.println(e1.getA());

        EkClass e2 = new EkClass(78);
        System.out.println(e2);
        System.out.println(e2.a);
        System.out.println(e2.getA());
        */

        DoClass d1 = new DoClass(12);
        EkClass e1 = new EkClass(23);
        System.out.println(d1.a);
        System.out.println(e1.a);
    }
}
