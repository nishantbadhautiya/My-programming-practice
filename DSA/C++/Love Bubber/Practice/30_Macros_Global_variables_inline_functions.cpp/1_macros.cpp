// #include <iostream>
// using namespace std;
// #define PI 3.14 // before compile define PI to 3.14 and it's not taking any storage
// int main()
// {
//     int r = 5;
//     // double pi = 3.14;  // taking storage of 8 bytes
//     // PI = PI + 1; // can not change macros
//     double area = PI * r * r;
//     cout << "Area is: " << area << endl;
//     return 0;
// }

// ****************************************************************************************
// HOME WORK ==> https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/

// C++ program to illustrate macros

// #include <iostream>
// using namespace std;
// #define LIMIT 5  // Macro definition
// int main()
// {
// 	cout << "The value of LIMIT"  // Print the value of macro defined
// 		<< " is " << LIMIT;
// 	return 0;
// }

// ********************************************************************

// C++ program to illustrate macros

// #include <iostream>
// using namespace std;
// #define AREA(l, b) (l * b) // Macro definition
// int main()
// {
// 	int l1 = 10, l2 = 5, area;  // Given lengths l1 and l2
// 	area = AREA(l1, l2);  // Find the area using macros
// 	cout << "Area of rectangle"   	// Print the area
// 		<< " is: "<<
// 		area;
// 	return 0;
// }

// ********************************************************************
// Object like macros

// #include <iostream>
// using namespace std;
// #define DATE 31
// int main()
// {
// 	cout << "Lockdown will be extended"
// 		<< " upto " << DATE
// 		<< "-MAY-2020";
// 	return 0;
// }

// ********************************************************************
// Chain Macros

// #include <iostream>
// using namespace std;
// #define ADD_TWO(x) ((x) + 2)
// #define DOUBLE(x) ((x) * 2)
// int main()
// {
//     // Chained usage
//     int result = DOUBLE(ADD_TWO(5));  // This becomes ((5 + 2) * 2), resulting in 14
//     cout << result << endl;
// }

// *********

// #include <iostream>
// using namespace std;
// #define INSTAGRAM FOLLOWERS
// #define FOLLOWERS 138
// int main()
// {
// 	cout << "Geeks for Geeks have "
// 		<< INSTAGRAM << "K followers on Instagram!";   //INSTAGRAM is expanded first to produce FOLLOWERS. Then the expanded macro is expanded to produce the outcome as 138K. This is called the chaining of macros.
// 	return 0;
// }

// ********************************************************************
// Function-like Macro

// #include <iostream>
// using namespace std;
// #define min(a, b) (((a) < (b)) ? (a) : (b)) // Function-like Macro definition
// int main()
// {
// 	int a = 18;
// 	int b = 76;
// 	cout << "Minimum value between "
// 		<< a << " and " << b
// 		<< " is: " << min(a, b);
// 	return 0;
// }

//*********

// #include <iostream>
// using namespace std;
// #define PI 3.1416
// #define AREA(r) (PI*(r)*(r))
// int main() {
// 	float r = 7; // radius of circle
// 	cout<<"Area of Circle with radius " << r <<": "<< AREA(r);
// 	return 0;
// }

// ********************************************************************
// Multi-line Macros

// #include <iostream>
// using namespace std;
// #define ELE 1, \
//             2, \
//             3 // // Multi-line Macro definition
// int main()
// {
//     // Array arr[] with elements
//     // defined in macros
//     int arr[] = {ELE};
//     printf("Elements of Array are:\n"); // Print elements
//     for (int i = 0; i < 3; i++)
//     {
//         cout << arr[i] << ' ';
//     }
//     return 0;
// }

// *********

#include <iostream>
using namespace std;
#define SQUARE(x)        \
    do                   \
    {                    \
        int temp = x;    \
        x = temp * temp; \
    } while (0)
int main()
{
    int num = 14;
    SQUARE(num);
    cout << "Square is : " << num << endl;
    return 0;
}
