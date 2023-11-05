#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> nums, int index, vector<vector<int>> &ans){
    // base case
    if(index >= nums.size()){
        ans.push_back(nums);
        return;
    }
    // Iterate through all possible choices for the current index
    for (int i = index; i < nums.size(); i++){
        swap(nums[i], nums[index]);
        solve(nums, index + 1, ans);   // Recurse on the next index
        swap(nums[i], nums[index]);    // backtrack
    }
}
vector<vector<int>> permutation(vector<int> nums){
    int index = 0;
    vector<vector<int>> ans;
    solve(nums, index, ans);
    return ans;
}
int main()
{
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans = permutation(nums);

    for (size_t i = 0; i < ans.size(); i++) {
        cout << "    [";
        for (size_t j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "]";
    }
    return 0;
}
