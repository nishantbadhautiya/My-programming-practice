// #include <iostream>
// using namespace std;
// void reachHome(int src, int dest)
// {
//     cout << "Source: " << src << "   Destination: " << dest << endl;
//     // base case
//     if (src == dest)
//     {
//         cout << "Reached at the Home" << endl;
//         return;
//     }
//     // processing - move ahead by one step
//     src++;
//     // Recursive Relation
//     reachHome(src, dest);
// }

// int fib(int num)
// {
//     if (num == 1)
//         return 0;
//     if (num == 2)
//         return 1;
//     int ans = fib(num - 1) + fib(num - 2);
//     return ans;
// }
// int main()
// {
//     // int dest = 10;
//     // int src = 1;
//     // reachHome(src, dest);
//     cout << fib(8) << endl;
//     return 0;
// }

// **************************************************************************************************

// #include <bits/stdc++.h>
// int countDistinctWays(int nStairs) {
//     // base case
//     if(nStairs < 0)
//         return 0;
//     if(nStairs == 0)
//         return 1;
//     // Recursive Relation
//     return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
// }

// **************************************************************************************************

#include <iostream>
using namespace std;
void sayDigit(string arr[], int num)
{
    // Base Case
    if (num == 0)
        return;
    // processing
    int digit = num % 10;
    num = num / 10;
    // Recursive Relation
    sayDigit(arr, num);
    cout << arr[digit] << " ";
}
int main()
{
    int num;
    cin >> num;
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    sayDigit(arr, num);
    return 0;
}
