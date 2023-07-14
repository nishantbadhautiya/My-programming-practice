#include <bits/stdc++.h>
using namespace std;
int compression(vector<char> &chars)
{
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();
    // traverse throughout the string
    while (i < n)
    {
        int j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }
        // my counter will be here when the vector is completely traverse or new or different characters is encountered
        chars[ansIndex++] = chars[i]; // stores old character
        int count = j - i;
        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}
int main()
{
    int n;
    cout << "Enter total characters: ";
    cin >> n;
    vector<char> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    int result = compression(a);
    cout << result << endl;
    return 0;
}