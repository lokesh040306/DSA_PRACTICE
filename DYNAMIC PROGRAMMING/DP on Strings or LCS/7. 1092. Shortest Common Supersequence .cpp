/*

class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        
        // Tabulation
        int len1 = str1.length();
        int len2 = str2.length();

        vector<vector<int>> dp(len1 + 1, vector<int> (len2 + 1, 0));

        // Fill the base cases
        for(int i = 0; i <= len1; i++) dp[i][0] = 0;
        for(int j = 0; j <= len2; j++) dp[0][j] = 0;

        // Fill the DP Table
        for(int i = 1; i <= len1; i++) {
            for(int j = 1; j <= len2; j++) {
                if(str1[i - 1] == str2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        // Find the maximum length of the lcs
        int len = dp[len1][len2];
        int i = len1, j = len2;
        int index = len - 1;

        string ans = "";

        // Finding the supersequence string
        while(i > 0 && j > 0) {
            // Matching characters
            if(str1[i - 1] == str2[j - 1]) {
                ans += str1[i - 1];
                i--;
                j--;
            } 
                // Non-matching characters
            else if(dp[i - 1][j] > dp[i][j - 1]) {
                ans += str1[i - 1];
                i--;
            }
            else {
                ans += str2[j - 1];
                j--;
            }
        }
        
        // Check for remaining characters
        while(i > 0) {
            ans += str1[i - 1];
            i--;
        }

        while(j > 0) {
            ans += str2[j - 1];
            j--;
        }

        // Reverse the string as we stored as bottom-up in DP Table
        reverse(ans.begin(), ans.end());

        return ans;
    }
};

*/