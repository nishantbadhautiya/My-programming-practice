// #include <iostream>
// using namespace std;
// int score = 15; // scope in complete program it's called global scope variable
// void b(int &i)
// {
//     cout << score << " in b" << endl;
//     cout << i << endl;
// }

// void a(int &i)
// {
//     cout << score  << " in a" << endl;
//     char ch = 'a';
//     score ++ ; // score will be change to 16 in complete program so it's a bad practice
//     cout << i << endl;
//     b(i);
// }

// int main()
// {
//     int i = 5;
//     a(i);
//     {
//         int i = 2;
//         cout << i << endl;
//     }
//     cout << i << endl;
//     return 0;
// }

// *********************************************************************************************

// // by using reference variable we saved the memory but we are still calling function so it will do minimul performance hit
// #include <iostream>
// using namespace std;
// int getMax(int &a, int &b) // pointing to the same memory address
// {
//     return (a > b) ? a : b;
// }
// int main()
// {
//     int a = 1, b = 2;
//     int ans = 0;
//     ans = getMax(a, b);
//     cout << ans << endl; // 2
//     a = a + 3;
//     b = b + 1;
//     ans = getMax(a, b);
//     cout << ans << endl; // 4
//     return 0;
// }

// *********************************************************************************************

// // Inline function improves the performance of the program. so there is no extra memory usage + no function call overhead. it's not suitable for large number of code in inline function
// #include <iostream>
// using namespace std;
// inline int getMax(int &a, int &b) // pointing to the same memory address
// {
//     return (a > b) ? a : b;
// }
// int main()
// {
//     int a = 1, b = 2;
//     int ans = 0;
//     ans = getMax(a, b);
//     cout << ans << endl; // 2
//     a = a + 3;
//     b = b + 1;
//     ans = getMax(a, b);
//     cout << ans << endl; // 4
//     return 0;
// }

// *********************************************************************************************
// ****************** Default Argument in function *********************************

#include <iostream>
using namespace std;
void print(int *arr, int size, int start = 0, int end = 23) // default argument , start from the right most
{
    cout << end << endl;
    for (int i = start; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[5] = {1, 4, 7, 8, 9};
    int size = 5;
    // print(arr, size);
    print(arr, size, 3);
    return 0;
}
