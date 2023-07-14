#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int i = 0;
    while (i < num)
    {
        int j = 0;
        while (j < num)
        {
            cout << "* ";
            j++;            
        }
        cout<<endl;
        i++;
    }
    return 0;
}