// #include <iostream>
// using namespace std;
// void Binary_to_Decimal(int num)
// {
//     int arr[45];
//     int rem;
//     int i = 0;
//     while (num != 0)
//     {
//         rem = num % 2;
//         num = num / 2;
//         arr[i] = rem;
//         i++;
//     }
//     for (int j = i - 1; j >= 0; j--)
//     {
//         cout << arr[j];
//     }
//     cout << endl;
// }
// int main()
// {
//     int num;
//     cout << "Enter the Number: ";
//     cin >> num;
//     Binary_to_Decimal(num);
//     return 0;
// }






// time complexity = O(log n)
// Using Arithmetic operator

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the Number: ";
//     cin >> num;
//     int binaryarr[34];
//     int i = 0;
//     while (num != 0)
//     {
//         binaryarr[i] = num %2;
//         num = num / 2;
//         i++;
//     }
//     for (int j = i-1; j >= 0; j--)
//     {
//         cout<<binaryarr[j];
//     }
//     return 0;
// }












// time complexity = O(1)
// Using bitwise Operator

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    for (int i = 31; i >= 0; i--)
    {
        int k = num >> i;
        if (k & 1)
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
    return 0;
}