#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {34, 25, 63, 24, 12};
    int size = arr.size();
    cout << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << arr.at(2) << endl;
    cout << arr.empty() << endl;
    cout << arr.front() << endl; // first element
    cout << arr.back() << endl;  // last element
    return 0;
}