/*

class Solution {
  private:
    int ways(vector<int> &price, int N, int index) {
        
        // Base case
        if(index == 0) {
            return N * price[0];
        }
        
        int notPick = 0 + ways(price, N, index - 1);
        
        int pick = INT_MIN;
        int rodLength = index + 1;
        
        if(rodLength <= N) {
            pick = price[index] + ways(price, N - rodLength, index);
        }
        
        return max(notPick, pick);
    }
    
    int waysMem(vector<int> &price, int N, int index, vector<vector<int>> &dp) {
        
        // Base case
        if(index == 0) {
            return N * price[0];
        }
        
        if(dp[index][N] != -1) {
            return dp[index][N];
        }
        
        int notPick = 0 + waysMem(price, N, index - 1, dp);
        
        int pick = INT_MIN;
        int rodLength = index + 1;
        
        if(rodLength <= N) {
            pick = price[index] + waysMem(price, N - rodLength, index, dp);
        }
        
        dp[index][N] = max(notPick, pick);
        
        return dp[index][N];
    }
    
  public:
    int cutRod(vector<int> &price) {
        
        // Recursion
        // int n = price.size();
        // return ways(price, n, n - 1);
        
        // Recursion + Memoization
        int n = price.size();
        vector<vector<int>> dp(n, vector<int> (n + 1, -1));
        return waysMem(price, n, n - 1, dp);
    }
};

*/