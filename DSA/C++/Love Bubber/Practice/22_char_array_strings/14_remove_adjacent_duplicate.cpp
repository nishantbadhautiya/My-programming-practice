// To be solve this question
#include <iostream>
using namespace std;
string removeDuplicates(string s)
{
    string temp = "";
    temp.push_back(s[0]);
    while (temp.length() > 0)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != s[i + 1])
            {
                temp.push_back(s[i + 1]);
            }
            else
            {
                temp.pop_back();
            }
        }
    }
    return temp;
}
int main()
{
    string s = "azxxzy";  // expected output: = ay
    // string s = "abbaca"; // expected output: = ca
    string s2 = removeDuplicates(s);
    cout << s2 << endl;
    return 0;
}