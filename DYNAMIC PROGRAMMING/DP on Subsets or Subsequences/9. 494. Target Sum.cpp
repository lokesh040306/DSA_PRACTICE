/*

class Solution {
private: 
    int ways(vector<int>& nums, int target, int index) {

        // Base case
        if(index == 0) {
            if(target == 0 && nums[0] == 0) return 2;
            if(target == 0 || target == nums[0]) return 1;
            return 0;
        }

        int notPick = ways(nums, target, index - 1);

        int pick = 0;
        if(nums[index] <= target) {
            pick = ways(nums, target - nums[index], index - 1);
        }

        return (notPick + pick);
    }

    int waysMem(vector<int>& nums, int target, int index, vector<vector<int>> &dp) {

        // Base case
        if(index == 0) {
            if(target == 0 && nums[0] == 0) return 2;
            if(target == 0 || target == nums[0]) return 1;
            return 0;
        }

        // Step-3:
        if(dp[index][target] != -1) {
            return dp[index][target];
        }

        int notPick = waysMem(nums, target, index - 1, dp);

        int pick = 0;
        if(nums[index] <= target) {
            pick = waysMem(nums, target - nums[index], index - 1, dp);
        }

        // Step-2:
        dp[index][target] = (notPick + pick);

        return dp[index][target];
    }

public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int n = nums.size();

        int totalSum = 0;
        for(int i = 0; i < n; i++) {
            totalSum += nums[i];
        }

        int req = totalSum - target;
        if(req < 0 || req % 2 != 0) return 0;

        // Recursion
        // return ways(nums, req / 2, n - 1);


        // Recursion + Memoization
        // Step-1:
        vector<vector<int>> dp(n, vector<int> (req + 1, -1));
        return waysMem(nums, req / 2, n - 1, dp);
    }
};

*/