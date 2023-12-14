#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.front() << endl;
    cout << "Last element: "<< q.back() << endl;
    cout << q.size() << endl;
    q.pop();
    cout << "Last element: "<< q.back() << endl;
    cout << q.front() << endl;
    cout << q.size() << endl;
    q.pop();
    q.pop();
    cout << q.size() << endl;
    if(q.empty()){
        cout << "Queue is empty"<< endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }
    return 0;
}