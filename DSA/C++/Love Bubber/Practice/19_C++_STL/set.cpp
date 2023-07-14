#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    for (auto i : s)
    {
        cout << i << "  ";
    }
    cout << endl;

    // s.erase(s.begin());        // delete first element of set
    // for (auto i : s)
    // {
    //     cout << i << "  ";
    // }
    // cout << endl;

    set<int> :: iterator it = s.begin();    // remove fourth elment of set using it++ three times
    // it++;
    // it++;
    // it++;
    // s.erase(it);
    // for (auto i : s)
    // {
    //     cout << i << "  ";
    // }
    // cout << endl;

    cout << s.count(0) << endl; // to check whether 0 is present or not

    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << it << "  ";
    }
    cout << endl;
    return 0;
}