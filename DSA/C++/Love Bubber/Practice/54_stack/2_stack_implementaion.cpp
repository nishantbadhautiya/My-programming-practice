#include<iostream>
using namespace std;
class Stack{
public:
    // properties
    int *arr;
    int size;
    int top;
    // behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top --;
        }
        else{
            cout << "Stack underflow" << endl;
        }
    }

    int peek(){
        if(top >= 0)
            return arr[top];
        else
            cout << "Stack is empty" << endl;
            return -1;
    }

    bool isEmpty(){
        if(top == -1)
            return true;
        else
            return false;
    }
};

int main()
{
    Stack st(5);
    st.push(10);
    st.push(20);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(60);
    if(st.isEmpty() == true){
        cout << "stack is empty" << endl;
    }
    else{
        cout << "stack is not empty" << endl;
    }
    cout << st.peek() << endl;
    return 0;
}
