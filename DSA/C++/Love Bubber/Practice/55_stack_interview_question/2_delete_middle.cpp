#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &inputStack, int count, int size){
    // base case
    if(count == size/2){
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();
    solve(inputStack, count + 1, size);
    inputStack.push(num);
}
void deleteMiddle(stack<int> &inputStack, int N) {
    // Write your code here
    int count = 0;
    solve(inputStack, count , N);
}

int main(){
    stack<int> inputStack;
    inputStack.push(10);
    inputStack.push(20);
    inputStack.push(30);
    inputStack.push(40);
    inputStack.push(50);
    deleteMiddle(inputStack, inputStack.size());
    cout << inputStack.top() << "  ";  inputStack.pop();
    cout << inputStack.top() << "  ";  inputStack.pop();
    cout << inputStack.top() << "  ";  inputStack.pop();
    cout << inputStack.top() << "  ";  inputStack.pop();
}
