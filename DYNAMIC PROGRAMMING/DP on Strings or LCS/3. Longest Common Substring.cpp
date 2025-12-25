/*

class Solution {
  public:
    int longestCommonSubstr(string& s1, string& s2) {
        
        int len1 = s1.length();
        int len2 = s2.length();
        
        // Creating DP table
        vector<vector<int>> dp(len1 + 1, vector<int> (len2 + 1, 0));
        
        // To store the maximum length of common substring
        int maxi = 0;
        
        // Storing base case
        for(int i = 0; i < len1; i++) dp[i][0] = 0;
        for(int j = 0; j < len1; j++) dp[0][j] = 0;
        
        for(int i = 1; i <= len1; i++) {
            for(int j = 1; j <= len2; j++) {
                // If characters match
                if(s1[i - 1] == s2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    maxi = max(maxi, dp[i][j]);
                }
                else {
                    // If characters do not match, reset to 0
                    dp[i][j] = 0;
                }
            }
        }
        
        return maxi;
    }
};

*/