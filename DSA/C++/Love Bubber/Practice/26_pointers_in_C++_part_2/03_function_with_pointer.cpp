// #include <iostream>
// using namespace std;
// void print(int *p)
// {
//     cout << p << endl;
//     cout << *p << endl;
// }
// void update(int *p)
// {
//     // can not change the address/pointer by using this function
//     // cout << "Inside p Before is: " << p << endl;
//     // p = p + 1;
//     // cout << "Inside p After is: " << p << endl;

//     // can change the value at the address of p
//     *p = *p + 1;
// }
// int main()
// {
//     int value = 4;
//     int *p = &value;
//     cout << *p << endl;
//     cout << value << endl;
//     cout << "Before p: " << p << endl;
//     update(p);
//     cout << "After p: " << p << endl;
//     cout << *p << endl;
//     cout << value << endl;
//     return 0;
// }

// *****************************************************************************************


#include <iostream>
using namespace std;
// int getsum(int arr[], int n)
int getsum(int *arr, int n)
{
    cout << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    cout << "Sum is: " << getsum(arr, 5) << endl;
    return 0;
}
