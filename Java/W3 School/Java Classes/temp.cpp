#include<iostream>
#include<unistd.h>
#include<thread>
using namespace std;

void taskA() {
    for (int i = 0; i < 10; i++)
    {
        sleep(1);
        cout << "taskA " << i << endl;
        fflush(stdout);
    }
}

void taskB() {
    for (int i = 0; i < 10; i++)
    {
        sleep(1);
        cout << "taskB " << i << endl;
        fflush(stdout);
    } 
}
int main(){
    thread t1(taskA);
    thread t2(taskB);
    t1.join();
    t2.join();
    return 0;
}
