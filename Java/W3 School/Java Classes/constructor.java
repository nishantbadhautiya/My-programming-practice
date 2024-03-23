public class constructor {
    int x ;
    public constructor (int y) {
        System.out.println("Constructor called");
        x = y;
    }
    public static void main(String[] args) {
        constructor obj = new constructor(8);
        System.out.println(obj.x);
    }
}
