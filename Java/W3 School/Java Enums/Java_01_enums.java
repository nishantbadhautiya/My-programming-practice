// An enum is a special "class" that represents a group of constants (unchangeable variables, like final variables).

enum Level {  // Enum outside a Class
    LOW,
    MEDIUM,
    HIGH
}
public class Java_01_enums {
    enum Difficulty_Level {  // Enum inside a Class
        EASY,
        NORMAL,
        HARD
    }

    public static void main(String[] args) {
        Level myLevel = Level.MEDIUM;
        System.out.println(myLevel);

        System.out.println(Level.HIGH);


        Difficulty_Level l = Difficulty_Level.EASY;
        System.out.println(l);
        System.out.println(Difficulty_Level.NORMAL);
    }
}

