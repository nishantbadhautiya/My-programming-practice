#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Nishant");
    s.push("Mohit");
    s.push("Aman");
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << "size of stack: " << s.size() << endl;
    cout << s.empty() << endl;
    return 0;
}