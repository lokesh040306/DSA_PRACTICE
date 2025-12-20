/*

class Solution {
    bool subsetSum(vector<int> &nums, int target, int index) {
        
        // Base case
        if(target == 0) {
            return true;
        }
        
        if(index == 0) {
            return (nums[index] == target);
        }
        
        bool notPick = subsetSum(nums, target, index - 1);
        
        bool pick = false;
        if(target >= nums[index]) {
            pick = subsetSum(nums, target - nums[index], index - 1);
        }
        
        return notPick || pick;
    }

    bool subsetSumMem(vector<int> &nums, int target, int index, vector<vector<int>> &dp) {
        
        // Base case
        if(target == 0) {
            return true;
        }
        
        if(index == 0) {
            return (nums[index] == target);
        }
        
        if(dp[index][target] != -1) {
            return dp[index][target];
        }
        
        bool notPick = subsetSumMem(nums, target, index - 1, dp);
        
        bool pick = false;
        if(target >= nums[index]) {
            pick = subsetSumMem(nums, target - nums[index], index - 1, dp);
        }
        
        dp[index][target] = notPick || pick;
        
        return dp[index][target];
    }

public:
    bool canPartition(vector<int>& nums) {
        
        int n = nums.size();
        
        int totalSum = 0;
        
        // Finding the total sum of the array
        for(int i = 0; i < n; i++) {
            totalSum += nums[i];
        }
        
        // Recursion
        // If totalSum is odd, it is not possible to find the two subset with equal sum
        // if(totalSum % 2 == 1) {
        //     return false;
        // }
        // else {
        //     int target = totalSum / 2;
        //     return subsetSum(nums, target, n - 1);
        // }


        // Recursion + Memoization
        int target = totalSum / 2;
        vector<vector<int>> dp(n, vector<int> (target + 1, -1));
        
        if(totalSum % 2 == 1) {
            return false;
        }
        else {
            return subsetSumMem(nums, target, n - 1, dp);
        }
    }
};

*/