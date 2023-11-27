// concept of shallow copy
// default copy constructor do shallow copy 
#include <iostream>
using namespace std;
class Hero
{
private:
    int health = 100;

public:
    char level = 'A';
    char *name;

    Hero()
    {
        cout << "Constructor called" << endl;
        name = new char[100];
    }
    void print()
    {
        cout << "[ name: " << this->name << " , level:  " << this->level << " ,  health:  " << this->health << "  ]  " << endl;
    }
    int getHealth()
    {
        return health;
    }
    void setHealth(int h)
    {
        health = h;
    }
    char getLevel()
    {
        return level;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    void setName(char *new_name){
        this->name = new_name;
    }
};

int main()
{
    Hero hero1;
    hero1.setHealth(34);
    hero1.setLevel('M');
    char name[23] = "Nishant";
    hero1.setName(name);
    hero1.print();

    // Hero hero2 (hero1);
    Hero hero2 = hero1;
    hero2.print();

    cout << endl;

    hero1.name[0] = 'M';

    hero1.print();
    hero2.print();

    return 0;
}
