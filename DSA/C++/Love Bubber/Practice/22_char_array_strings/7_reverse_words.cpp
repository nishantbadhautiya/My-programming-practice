#include <iostream>
using namespace std;
void reverse(string str)
{
    int s = 0;
    int e = str.length() - 1;
    while (s <= e)
    {
        swap(str[s++], str[e--]);
    }
    cout << str;
}
void words(string str)
{
    int count = 1;
    while (str[count - 1] != '\0')
    {
        string str2 = "";
        while (str[count - 1] != ' ')
        {
            str2.push_back(str[count - 1]);
            count++;
        }
        cout << str2 << " ";
        count++;
    }
}
int main()
{
    string str;
    str = "The sky is blue";
    cout << str << endl;
    words(str);
    return 0;
}
