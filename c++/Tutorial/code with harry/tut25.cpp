#include<iostream>
using namespace std;
class Employee
{
private:
    int id;
    int salary;
public:
    void setid(void)
    {
        salary = 1000;
        cout<<"Enter the ID of the employee: ";
        cin>>id;
    }
    void getid(void)
    {
        cout<<"The ID of this employee is: "<<id<<endl;
        cout<<"The salary of this employee is: "<<salary<<endl;
    }
};
int main()
{
    Employee facebook[100];
    for (int i = 0; i < 5; i++)
    {
        facebook[i].setid();
        facebook[i].getid();  
    }
    
    return 0;
}
