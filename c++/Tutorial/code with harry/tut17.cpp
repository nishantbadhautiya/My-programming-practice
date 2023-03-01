// #include<iostream>

// using namespace std;
// int product(int a , int b)
// {
//     static int c= 0;   //execute only one time
//     c+=2;
//     return a*b+c;
// }
// int main()
// {
//     int a,b;
//     cout<<"enter the value of a and b "<<endl;
//     cin>>a>>b;
//     cout<<"The product of a and b is: "<<product(a,b) <<endl;
//     cout<<"The product of a and b is: "<<product(a,b) <<endl;
//     cout<<"The product of a and b is: "<<product(a,b) <<endl;
//     cout<<"The product of a and b is: "<<product(a,b) <<endl;
//     cout<<"The product of a and b is: "<<product(a,b) <<endl;
//     cout<<"The product of a and b is: "<<product(a,b) <<endl;
//     cout<<"The product of a and b is: "<<product(a,b) <<endl;
//     cout<<"The product of a and b is: "<<product(a,b) <<endl;
//     cout<<"The product of a and b is: "<<product(a,b) <<endl;
//     cout<<"The product of a and b is: "<<product(a,b) <<endl;
//     cout<<"The product of a and b is: "<<product(a,b) <<endl;
//     cout<<"The product of a and b is: "<<product(a,b) <<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
float returned_money(int rupees, float factor=0.08)
{
    float total_money;
    total_money = rupees * factor;
    return total_money;
}
int main()
{
    int money = 100000;
    float factor = 0.02;
    float k = returned_money(money);
    cout << "Total money returned after one year as interest will be: " << k << endl;
    return 0;
}
