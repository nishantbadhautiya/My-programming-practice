#include <iostream>
using namespace std;
bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}
// Time Complexicity = O(m) + O(n) where m = size of s1 and n = size of s2
// Space Complexicity = O(1)
bool checkInclusion(string s1, string s2)
{
    // character count array
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }
    // traverse s2 string in window of size s1 length and compare
    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};
    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    // running for first window
    if (checkEqual(count1, count2))
    {
        return 1;
    }
    // running for further next window
    while (i < s2.length())
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;
        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;
        if (checkEqual(count1, count2))
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    string s1 = "adb";
    string s2 = "eidblaeooo";
    int result = checkInclusion(s1, s2);
    cout << result << endl;
    return 0;
}
