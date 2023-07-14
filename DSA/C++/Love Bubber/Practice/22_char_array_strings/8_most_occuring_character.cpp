#include <iostream>
using namespace std;
char getMaxOccuringChar(string str)
{
    int arr[26] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        // lowercase character
        if (ch >= 'a' && ch <= 'z')
        {
            arr[ch - 'a']++;
        }
        // uppercase character
        else
        {
            arr[ch - 'A']++;
        }
    }
    // int large = 0;
    // for (int i = 0; i < 26; i++)
    // {
    //     if (arr[i] > large)
    //     {
    //         large = arr[i];
    //     }
    // }
    // for (int i = 0; i < 26; i++)
    // {
    //     if (arr[i] == large)
    //     {
    //         // i++;
    //         return 'a' + i;
    //     }
    // }
    int ans, maximum = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maximum < arr[i])
        {
            ans = i;
            maximum = arr[i];
        }
    }
    return 'a' + ans;
}
int main()
{
    string str;
    str = "amit kumar";
    cout << getMaxOccuringChar(str) << endl;
    return 0;
}
