/*

Data Type 	Size 	    Description
byte    	1 byte 	    Stores whole numbers from -128 to 127
short   	2 bytes     Stores whole numbers from -32,768 to 32,767
int 	    4 bytes 	Stores whole numbers from -2,147,483,648 to 2,147,483,647
long 	    8 bytes 	Stores whole numbers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
float 	    4 bytes 	Stores fractional numbers. Sufficient for storing 6 to 7 decimal digits
double  	8 bytes 	Stores fractional numbers. Sufficient for storing 15 decimal digits
boolean 	1 bit 	    Stores true or false values
char 	    2 bytes 	Stores a single character/letter or ASCII values



    Widening Casting (automatically) - converting a smaller type to a larger type size
    byte -> short -> char -> int -> long -> float -> double

    Narrowing Casting (manually) - converting a larger type to a smaller size type
    double -> float -> long -> int -> char -> short -> byte 

 */


 public class typecast {

    public static void main(String[] args) {
        int x = 23;
        System.out.println(x);
        double y = x;  // wildening typecasting (done automatically)
        System.out.println(y);


        float my_num = 344.3553f;
        System.out.println(my_num);
        int num = (int)my_num;  // narrowing typecasting (done manually)
        System.out.println(num);

    }
}
