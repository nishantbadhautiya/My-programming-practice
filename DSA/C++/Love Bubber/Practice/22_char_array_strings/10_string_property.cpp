// #include <iostream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     char name[20] = "Nishant";
//     cout << name << endl;

//     // strlen method
//     // int len = strlen(name);
//     // cout << len << endl;

//     // strcpy method
//     // char name2[45];
//     // strcpy(name2, name);
//     // cout << name2 << endl;

//     // strcat method
//     // char name2[34] = " Badhautiya";
//     // strcat(name, name2);
//     // cout<<name<<endl;

//     // strcmp method
//     char name2[34] = "Nishant";
//     int ans = strcmp(name, name2);
//     cout<<ans<<endl;
//     return 0;
// }





// on String data_type
#include <iostream>
using namespace std;
int main()
{
    string name = "Nishant";
    cout << name.length() << endl; // same as strlen method
    
    string name2 = name;           // same as strcpy method
    cout << name2 << endl;

    string name3 = "Nishanz";
    cout << name.compare(name3) << endl;  // same as strcmp method comparing name with name3

    string name4 = " badhautiya";   // same as strcat method of string array
    name.append(name4);
    cout<<name<<endl;
    return 0;
}
