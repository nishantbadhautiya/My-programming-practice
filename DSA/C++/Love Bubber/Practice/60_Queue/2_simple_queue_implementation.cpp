/*



#include <bits/stdc++.h> 
class Queue {
public:
    int size;
    int *arr;
    int Front;
    int Rear;
    Queue() {
        size = 100001;
        arr = new int[size];
        Front = 0;
        Rear = 0;
    }

    //----------------- Public Functions of Queue -----------------

    bool isEmpty() {
        if(Front == Rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        if(Rear == size){
            cout << "Queue is full" << endl;
            return;
        }
        else{
            arr[Rear] = data;
            Rear ++;
        }
    }

    int dequeue() {
        if(Front == Rear){
            return -1;
        }
        int ans = arr[Front];
        arr[Front] = -1;
        Front++;
        if(Front == Rear){
            Front = 0;
            Rear = 0;
        }
        return ans;
    }

    int front() {
        if(Front == Rear){ // empty case
            return -1;
        }
        return arr[Front];
    }
};




*/