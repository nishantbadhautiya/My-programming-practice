#include <iostream>
using namespace std;
int main()
{
    int num = 2;
    char ch = 'a';
    while (true)
    {
        switch (num)
        {
        case 1:
            cout << "first" << endl;
            cout << "first again" << endl;
            break;
        case 2:
            switch (ch)
            {
            case 'a':
                cout << "The value of ch is " << ch << endl;
                break;
            case 'b':
                cout << "The value of ch is " << ch << endl;
                break;
            default:
                cout << "This is nested default case" << endl;
            }
            cout << "Second" << endl;
            // break;
            exit(0);
        default:
            cout << "It is default Case " << endl;
        }
    }
    return 0;
}