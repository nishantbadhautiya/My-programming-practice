// #include<iostream>
// // #include "Hero.cpp"
// using namespace std;
// class Hero{
//     // properties
//     char level;
//     int health;
// };
// int main()
// {
//     Hero h1;
//     cout << sizeof(h1) << endl;
//     return 0;
// }

// *****************************************************************************************

// #include<iostream>
// using namespace std;
// class Hero{
//     private:
//     int health = 100;
//     public:
//     char level = 'A';
//     void print(){
//         cout << level << endl;
//     }
//     int getHealth() {
//         return health;
//     }
//     void setHealth(int h){
//         health = h;
//     }
//     char getLevel(){
//         return level;
//     }
//     void setLevel(char ch){
//         level = ch;
//     }
// };
// int main()
// {
//     // static allocation
//     Hero ramesh;
//     cout << "size of ramesh is: " << sizeof(ramesh) << endl; // 8 due to padding and greedy alignment
//     // ramesh.health = 50;
//     cout << "Ramesh Health is: " << ramesh.getHealth() << endl;
//     ramesh.setHealth(80);
//     ramesh.level = 'B';
//     cout << "Health is: " << ramesh.getHealth() << endl;
//     cout << "Level is:  " << ramesh.level << endl;
//     ramesh.print();
//     return 0;
// }

// *****************************************************************************************

// #include <iostream>
// using namespace std;
// class Hero
// {
// private:
//     int health = 100;

// public:
//     char level = 'A';
//     void print()
//     {
//         cout << level << endl;
//     }
//     int getHealth()
//     {
//         return health;
//     }
//     void setHealth(int h)
//     {
//         health = h;
//     }
//     char getLevel()
//     {
//         return level;
//     }
//     void setLevel(char ch)
//     {
//         level = ch;
//     }
// };
// int main()
// {
//     // static allocation
//     Hero a;
//     a.setLevel('A');
//     a.setHealth(10);
//     cout << a.level << endl;
//     cout << a.getHealth() << endl;

//     // dynamic allocation
//     Hero *b = new Hero;
//     b->setLevel('B');
//     b->setHealth(20);
//     cout << (*b).level << endl;
//     cout << (*b).getHealth() << endl;

//     // using arrow operator
//     cout << b->level << endl;
//     cout << b->getHealth() <<endl;

//     return 0;
// }

// *****************************************************************************************

#include <iostream>
using namespace std;
class Hero
{
private:
    int health = 100;

public:
    char level = 'A';

    Hero()
    { // default constructor destroys and creation of new construction without parameter
        cout << "Constructor called" << endl;
    }
    // parameterized constructor
    Hero(int health)
    {
        cout << "This:- " << this << endl;
        this->health = health;
    }
    Hero(int health, int level)
    {
        this->health = health;
        this->level = level;
    }
    // copy constructor
    Hero(Hero& temp){
        cout << "Copy Constructor called" << endl;
        this->level = temp.level;
        this->health = temp.health;
    }

    void print()
    {
        cout << level << endl;
        cout << this->level << endl;
        cout << health << endl;
        cout << this->health << endl;
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
};
int main()
{
    /*

    // object creation statically
    Hero ramesh;
    // dynamically
    // Hero *h = new Hero;
    Hero *h = new Hero();

    */

    /*
     // Hero ramesh(50);
     // cout << ramesh.getHealth() << endl;
     // cout << "Address of ramesh is: " << &ramesh << endl;
     Hero *h3 = new Hero();

     Hero *h = new Hero(80);
     cout << h->getHealth() << endl;
     cout << h << endl;

     Hero *h2 = new Hero(90, 'D');
     cout << h2->getHealth() << endl;
     cout << h2->getLevel() << endl;
     h2->print();
     */

    Hero ramesh(22, 'E');
    ramesh.print();

    // Hero suresh;
    // suresh.level = ramesh.getLevel();
    // cout << "About Suresh " << endl;
    // suresh.print();

    // Hero suresh(ramesh);  // copy constructor called 
    // cout << "About Suresh" << endl;
    // suresh.print();

    // copy constructor
    Hero rahul(ramesh);
    cout << "About Rahul " << endl;
    rahul.print();

    return 0;
}