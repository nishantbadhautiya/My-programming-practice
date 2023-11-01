#include <iostream>
#include <vector>
using namespace std;
void solve(vector<vector<int>> &ans, int index, vector<int>output, vector<int> nums){
    // base case
    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }

    // exclude
    solve(ans, index + 1, output, nums);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(ans, index+1, output, nums);
}

vector<vector<int>> subsets(vector<int> nums){
    vector<vector<int>>ans;
    vector<int>output;
    int index = 0;
    solve(ans, index, output, nums);
    return ans;
}

int main()
{
    vector<int> v = {1, 2, 3};
    vector<vector<int>>ans =  subsets(v);

    for(vector<int> &subset : ans){
        cout << "  {" ;
        for (int i = 0; i < subset.size(); i++)
        {
            cout << subset[i] ;
            if(i < subset.size() - 1){
                cout << "," ;
            }
        }
        cout << "}" ;
    }
    cout << endl;
    return 0;
}
