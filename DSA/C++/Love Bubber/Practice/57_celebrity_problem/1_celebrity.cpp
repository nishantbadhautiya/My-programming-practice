/*



class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>>& M, int n) {
        int i = 0, j = n - 1;
    
    // Step 1: Check if there is a potential candidate for a celebrity
    while (i < j) {
        if (M[i][j] == 1) {
            i++; // If i knows j, i cannot be a celebrity, move to the next person
        } 
        else {
            j--; // If i doesn't know j, j cannot be a celebrity, move to the next person
        }
    }
    
    // Step 2: Validate the potential candidate
    for (int k = 0; k < n; ++k) {
        if (k != i && (M[i][k] == 1 || M[k][i] == 0)) {
            return -1; // If the candidate doesn't meet the criteria of a celebrity, return -1
        }
    }
    
    return i; // Return the index of the potential celebrity found
    }
};



*/