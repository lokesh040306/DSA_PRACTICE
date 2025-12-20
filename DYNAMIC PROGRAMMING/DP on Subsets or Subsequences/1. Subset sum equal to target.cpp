/*

class Solution {
  private: 
    bool solve(vector<int>& arr, int target, int index) {
        
        // Base case
        if(target == 0) {
            return true;
        }
        
        if(index == 0) {
            return (arr[index] == target);
        }
        
        bool notPick = solve(arr, target, index - 1);
        
        bool pick = false;
        if(target >= arr[index]) {
            pick = solve(arr, target - arr[index], index - 1);
        }
        
        return notPick || pick;
    }
    
    bool solveMem(vector<int>& arr, int target, int index, vector<vector<int>> &dp) {
        
        // Base case
        if(target == 0) {
            return true;
        }
        
        if(index == 0) {
            return (arr[index] == target);
        }
        
        // Step-3:
        if(dp[index][target] != -1) {
            return dp[index][target];
        }
        
        bool notPick = solveMem(arr, target, index - 1, dp);
        
        bool pick = false;
        // If the target is less than the current element we cannot pick it
        if(target >= arr[index]) {
            pick = solveMem(arr, target - arr[index], index - 1, dp);
        }
        
        // Step-2:
        dp[index][target] = notPick || pick;
        return dp[index][target];
    }
    
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        
        // Recursion
        // int n = arr.size();
        // return solve(arr, sum, n - 1);
        
        // Recursion + Memoization
        int n = arr.size();
        // Step-1:
        vector<vector<int>> dp(n, vector<int> (sum + 1, -1));
        return solveMem(arr, sum, n - 1, dp);
    }
};

*/