#include<bits/stdc++.h>
using namespace std;
class Solution
{
    private:
    queue<int> approach1_using_stack(queue<int> q){
        // insert all element from queue to stack
        stack<int> s;
        while(! q.empty()){
            int element = q.front();
            q.pop();
            s.push(element);
        }
        // insert all element from stack to queue
        while(! s.empty()){
            int element = s.top();
            s.pop();
            q.push(element);
        }
        return q;
    }
    
    queue<int> approach2_using_recursion(queue<int> q){
        // base case
        if(q.empty()){
            return q;
        }
        int element = q.front();
        q.pop();
        q = approach2_using_recursion(q);
        q.push(element);
        return q;
    }
    
    public:
    queue<int> rev(queue<int> q)
    {
        // return approach1_using_stack(q);
        return approach2_using_recursion(q);
    }
};
