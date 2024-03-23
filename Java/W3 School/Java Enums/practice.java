class First extends Thread{
    public void run() {
        for (int i = 0; i <= 100; i++) {
                System.out.println("First= " + i);
        }
    }
}
class Second extends Thread{
    public void main() {
        for (int i = 0; i <= 100; i++) {
            System.out.println("Second= " + i);
        }
    }
}

public class practice {

    public static void main(String[] args) {
        First f = new First();
        Second s = new Second();
        Thread obj = new Thread(f);
        Thread obj2 = new Thread(s);
        obj.start();
        obj2.start();
    }
}
