/*

class Solution {
    int profit(vector<int>& val, vector<int>& wt, int capacity, int index) {
        
        // Base case
        if(index == 0) {
            return (capacity / wt[0]) * val[0];
        }
        
        int notPick = 0 + profit(val, wt, capacity, index - 1);
        
        int pick = INT_MIN;
        if(capacity >= wt[index]) {
            pick = val[index] + profit(val, wt, capacity - wt[index], index);
        }
        
        return max(notPick, pick);
    }
    
    int profitMem(vector<int>& val, vector<int>& wt, int capacity, int index, vector<vector<int>> &dp) {
        
        // Base case
        if(index == 0) {
            return (capacity / wt[0]) * val[0];
        }
        
        if(dp[index][capacity] != -1) {
            return dp[index][capacity];
        }
        
        int notPick = 0 + profitMem(val, wt, capacity, index - 1, dp);
        
        int pick = INT_MIN;
        if(capacity >= wt[index]) {
            pick = val[index] + profitMem(val, wt, capacity - wt[index], index, dp);
        }
        
        return dp[index][capacity] = max(notPick, pick);
    }
    
  public:
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        
        // Recursion
        // int n = val.size();
        // return profit(val, wt, capacity, n - 1);
        
        
        // Recursion + Memoization
        int n = val.size();
        vector<vector<int>> dp(n, vector<int> (capacity + 1, -1));
        return profitMem(val, wt, capacity, n - 1, dp);
    }
};

*/