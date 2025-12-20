/*

class Solution {
    int ways(vector<int>& arr, int target, int index) {

    	// Base case
    	if(index == 0) {
            // If we have last element '0', it is valid subset too
    		if(target == 0 && arr[0] == 0) return 2;   // {} and {0}
    		if(target == 0 || target == arr[0]) return 1;
    		return 0;
    	}
    
    	int notPick = ways(arr, target, index - 1);
    
    	int pick = 0;
    	if(target >= arr[index]) {
    		pick = ways(arr, target - arr[index], index - 1);
    	}
    
        // Returning the total ways from each combination
    	return notPick + pick;
    }
    
    int waysMem(vector<int>& arr, int target, int index, vector<vector<int>> &dp) {

    	// Base case
    	if (index == 0) {
    		if (target == 0 && arr[0] == 0) return 2;  // {} and {0}
    		if (target == 0 || target == arr[0]) return 1;
    		return 0;
    	}
    
    	if(dp[index][target] != -1) {
    		return dp[index][target];
    	}
    
    	int notPick = waysMem(arr, target, index - 1, dp);
    
    	int pick = 0;
    	if(target >= arr[index]) {
    		pick = waysMem(arr, target - arr[index], index - 1, dp);
    	}
    
    	dp[index][target] = (notPick + pick);
    
    	return dp[index][target];
    }

  public:
    int perfectSum(vector<int>& arr, int target) {
        
        // Recursion
        // int n = arr.size();
        // return ways(arr, target, n - 1);
        
        // Recursion + Memoization
        int n = arr.size();
    	vector<vector<int>> dp(n, vector<int> (target + 1, -1));
    	return waysMem(arr, target, n-1, dp);
    }
};

*/