public class string {
    public static void main(String[] args) {
        String greeting = "Hello";
        System.out.println(greeting);
        System.out.println("The length of the txt string is: " + greeting.length());
        System.out.println(greeting.toLowerCase());
        System.out.println(greeting.toUpperCase());

        // The indexOf() method returns the index (the position) of the first occurrence of a specified text in a string (including whitespace)
        String txt = "Please locate where 'locate' occurs!";
        System.out.println(txt.indexOf("locate")); // Outputs 7



        String firstName = "John ";
        String lastName = "Doe";
        System.out.println(firstName.concat(lastName));

        String x = "10";
        int y = 20;
        String z = x + y;  // z will be 1020 (a String)
        System.out.println(z);


        // *************************************************************

        String txt2 = "We are the so-called \"Vikings\" from \' \\ the north.";
        System.out.println(txt2);
        
        char txt3 = '\'';
        System.out.println(txt3);

        // **************************************************************
        // '\f' escape sequence is used to insert a form feed character, typically causing a printer to advance to a new page.
        System.out.println("Page 1\fPage 2\fPage 3\fPage 4");


        // '\b' escape sequence is used to insert a backspace character, moving the cursor one position back.
        System.out.println("Hello\b World!");
    }
}
