#include <iostream>
#include <string.h>
using namespace std;
string removeOccurences(string str, string part)
{
    while (str.find(part) < str.length() && str.length() > 0)
    {
        str.erase(str.find(part), part.length());
    }
    return str;
}
int main()
{
    string str = "daabcbaabcbc";
    string part = "abc";
    string result = removeOccurences(str, part);
    cout << result << endl;
}
