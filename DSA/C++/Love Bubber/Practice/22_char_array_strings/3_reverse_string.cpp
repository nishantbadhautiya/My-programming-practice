// #include <iostream>
// using namespace std;
// int stringLength(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }
// void reverseString(char name[])
// {
//     int s = 0;
//     int e = stringLength(name) - 1;
//     while (s < e)
//     {
//         swap(name[s++], name[e--]);
//     }
//     cout << name;
// }
// int main()
// {
//     char name[45];
//     cout << "Enter the name: ";
//     cin >> name;
//     reverseString(name);
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
void reverseString(vector<char> &v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s++], v[e--]);
    }
}
int main()
{
    vector<char> name;
    name.push_back('n');
    name.push_back('i');
    name.push_back('s');
    name.push_back('h');
    name.push_back('a');
    name.push_back('n');
    name.push_back('t');
    for (auto i : name)
    {
        cout << i;
    }
    cout << endl;
    reverseString(name);
    for (auto i : name)
    {
        cout << i;
    }
    cout << endl;
    return 0;
}