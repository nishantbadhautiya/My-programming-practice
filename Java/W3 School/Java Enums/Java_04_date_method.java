import java.time.*; // // import the time package
import java.time.format.DateTimeFormatter;

public class Java_04_date_method {
    public static void main(String[] args) {
        LocalDate myObj =  LocalDate.now();  // Create a date object
        System.out.println(myObj);  // Display the current date

        LocalTime myObj2 = LocalTime.now();  // hour, minute, second, and nanoseconds
        System.out.println(myObj2); 

        LocalDateTime myObj3 = LocalDateTime.now();
        System.out.println(myObj3);

        DateTimeFormatter myFormatterObj = DateTimeFormatter.ofPattern("dd:MM:yyyy \t HH:mm:ss \t E, MMM, MMMM");
        System.out.println(myFormatterObj);
        String formatted_time = myObj3.format(myFormatterObj);
        System.out.println(formatted_time);
    }
}
