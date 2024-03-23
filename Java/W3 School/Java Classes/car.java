public class car {
    String modal_name;
    int modal_year;

    public car (String name, int year) {
        modal_name = name;
        modal_year = year;
    }
    public static void main(String[] args) {
        car obj = new car("Mustang", 2000);
        System.out.println(obj.modal_name);
        System.out.println(obj.modal_year);
    }
}
