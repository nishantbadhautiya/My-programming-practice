#include <iostream>
using namespace std;
int factorial(int n)
{
    // base condition
    cout << n << endl;
    if (n == 0)
        return 1;
    // Recursive Relation
    // int smallProblem = factorial(n - 1); 
    // int bigProblem = n * smallProblem;
    // return bigProblem;
    return n * factorial(n - 1);
}

int main()
{
    int num;
    cin >> num;
    int ans = factorial(num);
    cout << ans << endl;
    return 0;
}
