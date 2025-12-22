/*

class Solution {
    const int MOD = 1e9;
private:
    int ways(vector<int>& coins, int amount, int index) {

        // Base case
        if(index == 0) {
            if(amount % coins[index] == 0) return amount / coins[index];
            return MOD;
        }

        int notPick = 0 + ways(coins, amount, index - 1);

        int pick = MOD;
        if(coins[index] <= amount) {
            int temp = ways(coins, amount - coins[index], index);
            if(temp != MOD) {
                pick = 1 + temp;
            }
        }

        return min(notPick, pick);
    }

    int waysMem(vector<int>& coins, int amount, int index, vector<vector<int>> &dp) {

        // Base case
        if(index == 0) {
            if(amount % coins[index] == 0) return amount / coins[index];
            return MOD;
        }

        if(dp[index][amount] != -1) {
            return dp[index][amount];
        }

        int notPick = 0 + waysMem(coins, amount, index - 1, dp);

        int pick = MOD;
        if(coins[index] <= amount) {
            int temp = waysMem(coins, amount - coins[index], index, dp);
            if(temp != MOD) {
                pick = 1 + temp;
            }
        }

        dp[index][amount] = min(notPick, pick);

        return dp[index][amount];
    }

public:
    int coinChange(vector<int>& coins, int amount) {
        
        // Recursion
        // int n = coins.size();
        // int combinations = ways(coins, amount, n - 1);
        // if(combinations >= MOD) return -1;
        // return combinations;

        // Recursion + Memoization
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int> (amount + 1, -1));
        int combinations = waysMem(coins, amount, n - 1, dp);
        if(combinations >= MOD) return -1;
        return combinations;
    }
};

*/