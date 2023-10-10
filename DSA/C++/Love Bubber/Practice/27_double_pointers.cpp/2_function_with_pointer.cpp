#include <iostream>
using namespace std;
void update(int **p2)
{
    p2 = p2 + 1; // No change
    // *p2 = *p2 + 1;  // Change in p
    // **p2 = **p2 + 1;  // change in i
}
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    cout << "Before: " << i << endl;
    cout << "Before: " << p << endl;
    cout << "Before: " << p2 << endl;
    update(p2);
    cout << endl;
    cout << "After: " << i << endl;
    cout << "After: " << p << endl;
    cout << "After: " << p2 << endl;
    return 0;
}