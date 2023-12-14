#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_front(10);
    d.push_back(20);
    d.push_front(30);
    for(auto i : d){
        cout << i << "   ";
    }
    cout << endl;
    cout << d.front() << endl;
    cout << d.back() << endl;
    d.pop_front();
    cout << endl;
    cout << d.front() << endl;
    cout << d.back() << endl;
    d.pop_back();
    cout << endl;
    cout << d.front() << endl;
    cout << d.back() << endl;
    
    cout << endl;

    d.pop_back();
    cout << endl;
    cout << d.front() << endl;
    cout << d.back() << endl;
    cout << endl;
    if(d.empty()){
        cout << "Deque is empty" << endl;
    }
    else{
        cout << "Deque is not empty" << endl;
    }
    return 0;
}
