#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // shrink to fit
    vector<int> v;
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;
    v.push_back(1);
    cout << "capacity: " << v.capacity() << endl;
    v.push_back(2);
    cout << "capacity: " << v.capacity() << endl;
    v.push_back(3);
    cout << "capacity: " << v.capacity() << endl;
    cout << "size: " << v.size() << endl;
    cout << "*****************************" << endl;
    cout << v.at(2) << endl;
    cout << v.empty() << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    for (int i : v)
    {
        cout << i << "  ";
    }
    cout << endl;

    v.pop_back();

    for (int i : v)
    {
        cout << i << "  ";
    }
    cout << endl;

    v.clear();
    cout << v.size() << endl;     // size will became 0 when vector got clears
    cout << v.capacity() << endl; // capacity will remain same when vector clear

    cout << "*********************************************" << endl;
    vector<int> a(5, 9); // vector name = a,    vector size = 5,    all the element in the vector = 9
    for (int i : a)
    {
        cout << i << "   ";
    }
    cout << endl;

    vector<int> last(a); // in last vector all the elements of vector "a" will be copy
    for (int i : last)
    {
        cout << i << "   ";
    }
    cout << endl;
    return 0;
}