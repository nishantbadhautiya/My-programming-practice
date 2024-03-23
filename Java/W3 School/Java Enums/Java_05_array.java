import java.util.ArrayList;
import java.util.Collections;
public class Java_05_array {

    public static void main(String[] args) {
        // int[] arr = new int[34];
        ArrayList<String> cars = new ArrayList<String>();
        cars.add("Tesla");
        cars.add("Maruti");
        System.out.println(cars.get(1));
        cars.set(1, "Ford");
        cars.remove(0);
        cars.add("Volvo");
        cars.add("Tesla");
        // cars.clear();
        System.out.println(cars);
        System.out.println(cars.size());

        for(String i : cars){
            System.out.println(i);
        }
        Collections.sort(cars);
        System.out.println(cars);
    }
}
