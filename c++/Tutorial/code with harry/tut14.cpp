// #include <iostream>

// using namespace std;
// typedef struct employee
// {
//     int eID;
//     char favChar;
//     float salary;
// }em;

// int main()
// {
//     em nishant;
//     nishant.eID = 1;
//     nishant.favChar = 'c';
//     nishant.salary = 120000;
//     cout << "Nishant Id is: " << nishant.eID << endl;
//     cout << "Nishant favourite character is: " << nishant.favChar << endl;
//     cout << "Nishant salary is: " << nishant.salary << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// union money
// {
//     int rice;
//     char car;
//     float doller;
// };

// int main()
// {
//     union money m1;
//     m1.rice= 34;
//     m1.car= 'u';
//     // m1.doller= 44000;
//     cout<<m1.car<<endl;
//     // cout<<m1.car<<endl;
//     return 0;
// }


#include<iostream>

using namespace std;
int main()
{
    enum meal {breakfast, lunch, dinner};
    meal m1= lunch;
    cout<<m1<<endl;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    return 0;
}