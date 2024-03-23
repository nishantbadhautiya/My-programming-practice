// The return type of the overriding method can be a subtype of the return type of the overridden method. This is known as return type covariance.

class Animal {

    Animal reproduce () {
        return new Animal();
    }
}

class Dog extends Animal{

    @Override
    Dog reproduce() {
        return new Dog();
    }
}

public class cwh_48_1 {
    public static void main(String[] args) {
        Animal a = new Animal();
        System.out.println(a.reproduce());

        Dog d = new Dog();
        System.out.println(d.reproduce());
    }
}
