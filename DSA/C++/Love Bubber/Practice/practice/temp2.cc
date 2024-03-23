#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
    pid_t pid = fork();
    cout << pid << endl;
    if(pid == -1){
        fprintf(stderr, "No process has been created");
    }
    if(pid == 0){
        cout << "Child process " << endl;
    }
    else {
        cout << "Parent process" << endl;
    }
    return 0;
    /*
    
    */
}
