#include <iostream>
using namespace std;
int main()
{
    string str;
    str = "Nishant kumar";
    str[2] = '\0';
    // str.push_back('k');
    // str.pop_back();
    cout << str.length() << endl;
    cout << str << endl;
    return 0;
}
