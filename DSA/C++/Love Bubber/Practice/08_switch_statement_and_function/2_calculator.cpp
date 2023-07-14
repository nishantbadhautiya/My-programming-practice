#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;
    cout<<"Enter the first Number: ";
    cin>>num1;
    cout<<"Enter the second Number: ";
    cin>>num2;
    cout<<"Enter the Operation you want to perform: ";
    cin>>op;

    switch(op){
        case '+': cout<<"The sum of these number is: "<< (num1+num2) <<endl;
                break;
        case '-': cout<<"The subtraction of these number is: "<< (num1-num2) <<endl;
                break;
        case '*': cout<<"The multiplication of these number is: "<< (num1*num2) <<endl;
                break;
        case '/': cout<<"The division of these number is: "<< (num1/num2) <<endl;
                break;
        case '%': cout<<"The modulus of these number is: "<< (num1%num2) <<endl;
                break;
    }
    return 0;
}