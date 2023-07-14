#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << "  ";
    }
    cout << endl;
    // l.erase(l.begin());
    // for (int i : l)
    // {
    //     cout << i << "  ";
    // }
    // cout << endl;

    // cout<<l.empty()<<endl;

    cout << "size of list: " << l.size() << endl;
    cout << "****************************************" << endl;
    // copy from old list to new list
    for (int i : l)
    {
        cout << i << "  ";
    }
    cout << endl;
    list<int> newlist(l);
    for (int i : newlist)
    {
        cout << i << "  ";
    }
    cout << endl;

    cout << "****************************************" << endl;
    list<int> l2(5, 78);
    for (int i : l2)
    {
        cout << i << "  ";
    }
    cout << endl;
    return 0;
}