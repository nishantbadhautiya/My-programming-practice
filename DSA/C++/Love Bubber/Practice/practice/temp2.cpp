#include<iostream>
#include<cstring>
using namespace std;
class Person{
    public:
        char name[30];
        int id;
        void get_info(const char *name,int id){
            strcpy(this->name, name);
            this->id = id;
            cout << "The name of the student is: " << this->name << " and id is: " << this->id << endl;      
        }
};


class Student{
    protected:
        int roll_number;
        char grade;
    public: 
        void student_info(int roll_number, char grade){
            this->roll_number = roll_number;
            this->grade = grade;
            cout << "Name of the student is : " << "Roll Number is: " << this->roll_number << " grade is: " << this->grade ;
        }
};

class Genius : public Person, public Student{
    public:
        void get_genius_info(){
            cout << "The genius student info is: \n" << "Name: " << this->name << " id: " << this->id << " roll number: " << this->roll_number << " grade: " << this->grade<< "  " ;
        }
};

int main()
{
    Genius g;
    g.get_info("Nishant", 33);
    g.student_info(33, 'a');
    g.get_genius_info();
    return 0;
}
