// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5


#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << j << " ";
            // cout << num - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}