// #include <iostream>
// #include <array>
// using namespace std;
// int main()
// {
//     array<int, 5> arr = {34, 25, 63, 24, 12};
//     int size = arr.size();
//     cout << size << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << "  ";
//     }
//     cout << endl;
//     cout << arr.at(2) << endl;
//     cout << arr.empty() << endl;
//     cout << arr.front() << endl; // first element
//     cout << arr.back() << endl;  // last element
//     return 0;
// }

//**********************************************************************************
// iteration on array
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {22, 45, 82, 36, 49};
    // Accessing elements using a loop
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr.at(i) << "  ";
    }
    cout << endl;

    // Accessing elements using a range-based loop
    for (const auto &element : arr)
    {
        cout << element << "  ";
    }
    cout << endl;

    // Accessing elements using iterators
    cout << *arr.begin() << endl;
    cout << *arr.end() << endl;

    for (auto it = arr.begin(); it != arr.end(); ++it)
    {
        cout << *it << "  ";
    }
    cout << endl;

    // another way to access elements
    for (auto i : arr)
    {
        cout << i << "  ";
    }
    cout << endl;
    return 0;
}
