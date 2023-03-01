#include<iostream>
using namespace std;
int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     cout<<i<<endl;
    // }
    // int i=1;
    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    // int i=1;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while (true);
    int num= 6;
    int i=0;
    do
    {
        cout<<num<<" X "<<i+1<<" = "<<num*(i+1)<<endl;
        i++;
    } while (i<10);
    
    return 0;
}
