#include<iostream>
using namespace std;
void printNos(int N)
{
    //Your code here
    int i = 1;
    if(i <= N){
        cout << i << " ";
        i++;
    }
}
int main()
{
    int num;
    cin>>num;
     printNos(num);
    // cout << ans << endl;
    return 0;
}