#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";
    cout << arr << endl;
    cout << ch << endl; // prints entire string

    char *c = &ch[0];
    cout << c << endl; // prints entire string
    return 0;
}
