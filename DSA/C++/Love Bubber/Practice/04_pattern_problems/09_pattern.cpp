#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number ";
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        int j = 1;
        while (j <= num)
        {
            // char ch = 65 + j - 1;
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}