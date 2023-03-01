// #include <iostream>
// using namespace std;
// float sum(float a, int b)
// {
//     return a + b;
// }
// int sum(int a, int b, int c)
// {
//     return a + b + c;
// }
// int main()
// {
//     float x = 2.56;
//     int y = 3;
//     cout << "The sum of 2 and 3 is: " << sum(x, y) << endl;
//     cout << "The sum of 2, 5 and 3 is: " << sum(2, 5, 3) << endl;
//     return 0;
// }

#include <iostream>

using namespace std;
double volume(int a)
{
    return a * a * a;
}
double volume(int r, int h)
{
    return (3.14 * r * r * h);
}
double volume(int l, int b, int h)
{
    return l * b * h;
}
int main()
{
    cout << "The volume of cube of side 3 is: " << volume(3) << endl;
    cout << "The volume of cylinder  of radius 3 and height 5 is: " << volume(3, 5) << endl;
    cout << "The volume of cuboid of length 3, breadth 4 and height 8 is: " << volume(3, 4, 8) << endl;
    return 0;
}