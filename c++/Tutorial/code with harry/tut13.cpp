#include <iostream>

using namespace std;
int main()
{
    int marks[4];
    marks[0] = 46;
    marks[1] = 23;
    marks[2] = 90;
    marks[3] = 66;
    // marks[2]= 102;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // int i = 0;
    // do
    // {
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    //     i++;
    // } while (i < 4);
    int *ptr = &marks[0];
    // cout<<*ptr<<endl;
    // ptr++;
    // cout<<*ptr<<endl;
    // ptr++;
    // cout<<*ptr<<endl;
    // ptr++;
    // cout<<*ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<*ptr++<<endl;
    // cout<<*++ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<*(ptr+1)<<endl;
    // cout<<*(ptr+2)<<endl;
    // cout<<*(ptr+3)<<endl;
    return 0;
}
