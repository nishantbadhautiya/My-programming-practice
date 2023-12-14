/*



#include <bits/stdc++.h> 
class CircularQueue{
    public:
    int size;
    int *arr;
    int front;
    int rear;    
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        if((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))){
            // cout << "Queue is full";
            return false;
        }
        // if queue is empty
        else if(front == -1){
            front = rear = 0;
        }
        // queue full till the end but there are not elements at the starting of queue
        else if(rear == (size - 1) && front != 0){
            rear = 0;
        }
        // Normal case
        else{
            rear ++;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // if queue is empty
        if(front == -1){
            // cout << "Queue is empty" << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        // only one element is queue
        if(front == rear){
            front = -1;
            rear = -1;
        }
        // there are elements in the starting of queue and one element at last
        else if(front == (size - 1)){
            front = 0;
        }
        // Normal case
        else{
            front++;
        }
        return ans;
    }
};




*/