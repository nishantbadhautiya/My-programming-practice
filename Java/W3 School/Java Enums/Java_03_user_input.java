import java.util.*;
public class Java_03_user_input {
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter your name , age and salary: ");
        String name = obj.nextLine(); 
        int age = obj.nextInt();
        double salary = obj.nextDouble();

        System.out.println("Name:  " + name );
        System.out.println("Age: " + age);
        System.out.println("Salary: " + salary);

    }
}
