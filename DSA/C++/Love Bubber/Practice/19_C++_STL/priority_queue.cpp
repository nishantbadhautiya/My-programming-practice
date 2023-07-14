#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> maxi; // by default it is max-heap; means when we pop an elment first element will be greatest among our queue.

    // min-heap
    priority_queue<int, vector<int>, greater<int>> mini;
    maxi.push(24);
    maxi.push(135);
    maxi.push(45);
    maxi.push(56);
    int maxisize = maxi.size();
    for (int i = 0; i < maxisize; i++)
    {
        cout << maxi.top() << "  ";
        maxi.pop();
    }
    cout << endl;

    mini.push(46);
    mini.push(89);
    mini.push(26);
    mini.push(99);

    cout << mini.size() << endl;
    cout << mini.top() << endl;
    cout << mini.empty() << endl;
    int minisize = mini.size();
    for (int i = 0; i < minisize; i++)
    {
        cout << mini.top() << "  ";
        mini.pop();
    }
    cout << endl;
    cout << mini.empty() << endl;
    return 0;
}