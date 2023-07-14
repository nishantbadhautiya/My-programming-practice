// 11111
//  2222
//   333
//    44
//     5



#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    int row = 1;
    while (row <= num)
    {
        //print space
        int space = 1;
        while (space < row)
        {
            cout<<" ";
            space++;
        }
        //print counting
        int count = 1;
        while (count <= num-row+1)
        {
            cout<<row;
            count++;
        }
        cout<<endl;
        row++;
    }
    
    return 0;
}