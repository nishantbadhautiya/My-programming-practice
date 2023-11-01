#include<iostream>
#include<vector>
using namespace std;
void solve(string digits, vector<string> &ans, int index, string output, string mapping[]){
    // base case
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }
    int number = digits[index] - '0'; // converts string to interger but subtracting '0' 
    string values = mapping[number];  // values are like "abc"
    for (int i = 0; i < values.length(); i++)
    {
        output.push_back(values[i]);
        solve(digits, ans, index + 1, output, mapping);
        output.pop_back(); // backtracking we are deleting the digits[index] value else it will add to out string.
    }
}

vector<string> letterCombinations(string digits){
    vector<string> ans;
    if(digits.length() == 0){
        return ans;
    }
    int index = 0;
    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string output = "";
    solve(digits, ans, index, output, mapping);
}

int main()
{
    string digit = "23";
    vector<string> ans = letterCombinations(digit);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << " \"";
        cout << ans[i] ;
        cout << "\",";
    }
    return 0;
}
 