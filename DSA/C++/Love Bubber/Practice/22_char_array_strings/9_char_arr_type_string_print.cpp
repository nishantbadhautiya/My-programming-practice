#include <iostream>
using namespace std;
int main()
{
    char name[80];
    cout << "Enter the name: ";
    cin.getline(name, 50);   // maximum 50 characters can be print
    cout << name << endl;
    return 0;
}
// How to use Custom Delimeter(HW)
