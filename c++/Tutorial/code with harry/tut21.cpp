#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);  //function declaration and i will define outside
    void getdata()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
        cout << "The value of d is: " << d << endl;
        cout << "The value of e is: " << e << endl;
    }
};
void Employee::setdata(int a1, int b1, int c1)   //fuction defination
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee harry;
    harry.d = 45;
    harry.e = 23;
    harry.setdata(1, 2, 3);
    harry.getdata();
    return 0;
}

// #include <iostream>
// using namespace std;
// class Animal
// {
// private:
//     float income;
//     char desease;

// public:
//     int id;
//     char name;
//     void setdata(float salery, char deseases);
//     void getdata()
//     {
//         cout << "The id of my dog is: " << id << endl;
//         cout << "The name of my dog is: " << name << endl;
//         cout << "The income of my dog is: " << income << endl;
//         cout << "The desease of my dog is: " << desease << endl;
//     }
// }dog1, dog2;
// void Animal ::setdata(float salery, char deseases)
// {
//     income = salery;
//     desease = deseases;
// }
// int main()
// {
//     // Animal dog1;
//     dog1.id = 122;
//     dog1.name = 't';
//     dog1.setdata(122.223, 'p');
//     dog1.getdata();

//     // Animal dog2;
//     dog2.id = 123;
//     dog2.name = 'm';
//     dog2.setdata(1223.223, 's');
//     dog2.getdata();
//     return 0;
// }