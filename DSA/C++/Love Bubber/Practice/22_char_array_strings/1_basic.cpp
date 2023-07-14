#include <iostream>
using namespace std;
int main()
{
    char name[34];
    cout<<"Enter the name: ";
    cin>>name;
    name[3] = '\0';
    cout<<"Your name is : "<<name<<endl;
    return 0;
}
