/*

class Solution {
private: 
    int ways(int amount, vector<int>& coins, int index) {

        // Base case
        if(amount == 0) {
            return 1;
        }

        if(index == 0) {
            if(amount % coins[0] == 0) return 1;
            return 0;
        }

        int notPick = ways(amount, coins, index - 1);

        int pick = 0;
        if(coins[index] <= amount) {
            pick = ways(amount - coins[index], coins, index);
        } 

        return (notPick + pick);
    }

    int waysMem(int amount, vector<int>& coins, int index, vector<vector<int>> &dp) {

        // Base case
        if(amount == 0) {
            return 1;
        }

        if(index == 0) {
            if(amount % coins[0] == 0) return 1;
            return 0;
        }

        // Step-3:
        if(dp[index][amount] != -1) {
            return dp[index][amount];
        }

        int notPick = waysMem(amount, coins, index - 1, dp);

        int pick = 0;
        if(coins[index] <= amount) {
            pick = waysMem(amount - coins[index], coins, index, dp);
        } 

        // Step-2:
        dp[index][amount] = (notPick + pick);

        return dp[index][amount];
    }

public:
    int change(int amount, vector<int>& coins) {
        
        // Recursion
        // int n = coins.size();
        // return ways(amount, coins, n - 1);

        // Recursion + Memoization
        int n = coins.size();
        // Step-1:
        vector<vector<int>> dp(n, vector<int> (amount + 1, -1));
        return waysMem(amount, coins, n - 1, dp);

    }
};

*/