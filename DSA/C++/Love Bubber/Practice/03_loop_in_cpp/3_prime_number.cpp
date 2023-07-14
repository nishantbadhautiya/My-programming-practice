#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout<<num << " is not Prime Number "<<endl;
            return 0;
        }
    }
    cout<<num<<" is a Prime Number "<<endl;
    return 0;
}