// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int ans = 1;
//     for (int i = 0; i < b; i++)
//     {
//         ans = ans * a;
//     }
//     cout << ans << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
void power()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    cout<<ans<<endl;
}
int main()
{
    // int a, b;
    // cin >> a >> b;
    // int result = power(a, b);
    // cout << result << endl;

    // int c, d;
    // cin >> c >> d;
    //  result = power(c, d);
    // cout << result << endl;

    power();
    power();
    power();
    power();

    return 0;
}