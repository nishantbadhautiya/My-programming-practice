#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for (int i : d)
    {
        cout << i << "  ";
    }
    cout << endl;
    // d.pop_front();
    // for (int i : d)
    // {
    //     cout << i << "  ";
    // }
    // cout << endl;

    cout << d.at(1) << endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.empty()<<endl;
    cout<<"**************************************"<<endl;
    cout<<"before erase size = "<<d.size()<<endl;
    // d.clear();
    d.erase(d.begin(), d.begin() + 1);     //erase element from deque's beginning to next first element 
    cout<<"After erase size = "<<d.size()<<endl;
    cout<<d.max_size()<<endl;   // maximum size allocated  to deque it's same before as well as at the end of our deque
    return 0;
}