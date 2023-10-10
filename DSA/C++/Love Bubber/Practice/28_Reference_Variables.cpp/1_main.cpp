// REFERENCE VARIABLE

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 5;  // variable
//     int &j = i; // Reference variable
//     cout << i << endl;
//     i++;
//     cout << i << endl;
//     j++;
//     cout << i << endl;
//     cout << j << endl;
//     return 0;
// }

// *****************************************************************************************

// #include <iostream>
// using namespace std;
// void update1(int n) // simple variable so no change in n
// {
//     n++;
// }
// void update2(int &n) // creation of Reference variable
// {
//     n++;
// }
// void update3(int *n) // passing the reference using pointers
// {
//     (*n)++;
// }
// int main()
// {
//     int n = 5;
//     cout << "Before: " << n << endl;
//     // update1(n);
//     update2(n);
//     // int *ptr = &n;
//     // update3(ptr);
//     cout << "After: " << n << endl;
//     return 0;
// }

// *****************************************************************************************
// Return by reference

// #include <iostream>
// using namespace std;
// int &func(int a) // Bad Practice
// {
//     int num = a;
//     int &ans = num;
//     return ans;
// }
// int *fun(int n) // Bad Practice
// {
//     int *ptr = &n;
//     return ptr;
// }

// int main()
// {
//     int n = 5;
//     // func(5);
//     fun(n);
//     return 0;
// }

// *****************************************************************************************

// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch = 'q';
//     cout << sizeof(ch) << endl;
//     char *c = &ch;
//     cout << sizeof(c) << endl;
//     return 0;
// }

// *****************************************************************************************

// #include <iostream>
// using namespace std;
// int getSum(int *arr, int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     // variable size array
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // taking input in array
//     int ans = getSum(arr, n);
//     cout << "Answer is: " << ans << endl;
//     return 0;
// }

// *****************************************************************************************

#include <iostream>
using namespace std;
int main()
{
    // case 1
    while (true)
    {
        int i = 5; // it will create in stack and after going outside memory will be release
    }
    // case 2
    while (true)
    {
        int *ptr = new int; // it will create in heap but it will not release after going outside of loop
        delete ptr;
    }
    return 0;
}
