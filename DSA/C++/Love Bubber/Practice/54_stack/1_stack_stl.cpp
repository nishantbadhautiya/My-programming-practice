#include<iostream>
#include<stack>
using namespace std;
int main()
{
    // creation of a stack
    stack<int> s;

    // insert element
    s.push(2);
    s.push(3);
    s.push(8);

    // remove element
    s.pop();

    // peek operation
    cout << s.top() << endl;

    // getting size of the stack
    cout << s.size() << endl;
    if(s.empty() == true){
        cout << "Stack is empty" << endl;
    }
    else{
        cout << "Stack is not empty" << endl;
    }
    
    return 0;
}