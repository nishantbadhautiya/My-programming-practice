#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age: " << endl;
    cin >> age;
    // if (age<18 && age>0)
    // {
    //     cout<<"you cannot come to my party"<<endl;
    // }
    // else if (age==18)
    // {
    //     cout<<"you are a kid and you need a kidpass to come in my party."<<endl;
    // }
    // else if (age<=0)
    // {
    //     cout<<"you are not borned"<<endl;
    // }

    // else
    // {
    //     cout<<"you are welcome in my party."<<endl;
    // }
    switch (age)
    {
    case 18:
        cout << "you are 18" << endl;
        break;
    case 22:
        cout << "you are 22" << endl;
        break;
    case 2:
        cout << "you are 2" << endl;
        break;
    default:
        cout << "No spacial switch case found" << endl;
        break;
    }
    return 0;
}
