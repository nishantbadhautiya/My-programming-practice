#include<iostream>
using namespace std;
bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0 )
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    if (isPrime(num))
    {
        cout<<"prime Number"<<endl;
    }
    else
    {
        cout<<"Not a Prime Number"<<endl;
    }
    return 0;
}