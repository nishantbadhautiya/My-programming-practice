// Enum in a Switch Statement

enum Level{
    LOW,
    MEDIUM, 
    HIGH
}
public class Java_02_enums {
    public static void main(String[] args) {
        Level myLevel = Level.MEDIUM;
        switch (myLevel) {
            case LOW:
                System.out.println("Low Level");
                break;
            case MEDIUM:
                System.out.println("Medium Level");
                break;
            case HIGH:
                System.out.println("High Level");
                break;
            default:
                break;
        }

        System.out.println();

        for (Level i : Level.values()) {   // The enum type has a values() method, which returns an array of all enum constants. This method is useful when you want to loop through the constants of an enum:
            System.out.println(i);
        }

    }
}
