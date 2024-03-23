abstract class Parent {
    public Parent () {
        System.out.println("I am a constructor of Parent class");
    }

    public void sayHello () {
        System.out.println("Hello");
    }

    abstract public void greet ();
}


class Child1 extends Parent {
    @Override
    public void greet () {
        System.out.println("Good Morning");
    }
}

class Child2 extends Parent {
    @Override
    public void greet () {
        System.out.println("Good Afternoon");
    }
}
