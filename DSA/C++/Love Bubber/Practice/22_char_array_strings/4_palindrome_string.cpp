#include <iostream>
using namespace std;
int stringLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        return (ch - 'A') + 'a';
    }
}
bool isPalindrome(char name[])
{
    int s = 0;
    int e = stringLength(name) - 1;
    while (s <= e)
    {
        if (toLowerCase(name[s]) != toLowerCase(name[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}
int main()
{
    char name[45];
    cout << "Enter the name: ";
    cin >> name;
    bool ans = isPalindrome(name);
    cout << ans;
    return 0;
}
