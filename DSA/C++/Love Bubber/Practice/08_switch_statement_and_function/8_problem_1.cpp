#include<iostream>
using namespace std;
int nth_term(int num)
{
    return (3*num)+7;
}
int main()
{
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int output = nth_term(num);
    cout<<"Your Answer is: "<<output<<endl;
    return 0;
}