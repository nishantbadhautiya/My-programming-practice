#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    cout << q.size() << endl;
    q.push("Nishant");
    q.push("Mohit");
    q.push("Abhishek");
    cout << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;
    q.pop();
    q.pop();
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;
    
    return 0;
}