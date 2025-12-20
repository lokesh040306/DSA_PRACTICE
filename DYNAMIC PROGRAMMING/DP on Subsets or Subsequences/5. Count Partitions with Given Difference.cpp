/*

class Solution {
    int ways(vector<int>& arr, int target, int index) {
        
        // Base case
        if(index == 0) {
            // If we have last element '0', it is valid subset too
            if(target == 0 && arr[0] == 0) return 2;
            if(target == 0 || target == arr[index]) return 1;
            return 0;
        }
        
        int notPick = ways(arr, target, index - 1);
        
        int pick = 0;
        if(target >= arr[index]) {
            pick = ways(arr, target - arr[index], index - 1);
        }
        
        // Returning the total ways from each combination
        return pick + notPick;
    }
    
    int waysMem(vector<int>& arr, int target, int index, vector<vector<int>> &dp) {
        
        // Base case
        if(index == 0) {
            if(target == 0 && arr[0] == 0) return 2;
            if(target == 0 || target == arr[index]) return 1;
            return 0;
        }
        
        // Step-3:
        if(dp[index][target] != -1) {
            return dp[index][target];
        }
        
        int notPick = waysMem(arr, target, index - 1, dp);
        
        int pick = 0;
        if(target >= arr[index]) {
            pick = waysMem(arr, target - arr[index], index - 1, dp);
        }
        
        // Step-2:
        dp[index][target] = pick + notPick;
        
        return dp[index][target];
    }
    
  public:
    int countPartitions(vector<int>& arr, int diff) {
        
        int n = arr.size();
        
        int totalSum = 0;
        for(int i = 0; i < n; i++) {
            totalSum += arr[i];
        }
        
        // Excluding the 'diff' the array should be divide into two parts with equal sum
        int target = totalSum - diff;
        
        if(target < 0 || target % 2 == 1) {
            return 0;
        }
        
        // Recursion
        // return ways(arr, target / 2, n - 1);
        
        
        // Recursion + Memoization
        int k = target / 2;
        // Step-1: 
        vector<vector<int>> dp(n, vector<int> (k + 1, -1));
        return waysMem(arr, k, n - 1, dp);
    }
};

*/