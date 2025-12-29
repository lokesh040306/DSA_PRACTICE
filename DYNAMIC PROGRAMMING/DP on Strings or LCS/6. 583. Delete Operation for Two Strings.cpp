/*

class Solution {
    int lcs(string word1, string word2, int index1, int index2) {

        // Base case
        if(index1 < 0 || index2 < 0) {
            return 0;
        }

        // Matching characters
        if(word1[index1] == word2[index2]) {
            return 1 + lcs(word1, word2, index1 - 1, index2 - 1);
        }

        // Non-matching characters
        return max(lcs(word1, word2, index1 - 1, index2), lcs(word1, word2, index1, index2 - 1));
    }

    int lcsMem(string word1, string word2, int index1, int index2, vector<vector<int>> &dp) {

        // Base case
        if(index1 < 0 || index2 < 0) {
            return 0;
        }

        if(dp[index1][index2] != -1) {
            return dp[index1][index2];
        }

        if(word1[index1] == word2[index2]) {
            return dp[index1][index2] = 1 + lcsMem(word1, word2, index1 - 1, index2 - 1, dp);
        }

        dp[index1][index2] = max(lcsMem(word1, word2, index1 - 1, index2, dp), lcsMem(word1, word2, index1, index2 - 1, dp));

        return dp[index1][index2];
    }

public:
    int minDistance(string word1, string word2) {
        
        // Recursion
        // int len1 = word1.length();
        // int len2 = word2.length();
        // int len = lcs(word1, word2, len1 - 1, len2 - 1);
        // return (len1 - len) + (len2 - len);


        // Recursion + Memoization
        // int len1 = word1.length();
        // int len2 = word2.length();
        // vector<vector<int>> dp(len1, vector<int> (len2 + 1, -1));
        // int len = lcsMem(word1, word2, len1 - 1, len2 - 1, dp);
        // return (len1 - len) + (len2 - len);


        // Tabulation
        int len1 = word1.length();
        int len2 = word2.length();
        vector<vector<int>> dp(len1 + 1, vector<int> (len2 + 1, 0));

        // fill first row and first column with 0
        for(int i = 0; i <= len1; i++) dp[i][0] = 0;
        for(int j = 0; j <= len2; j++) dp[0][j] = 0;

        // Fill DP table bottom-up
        for(int i = 1; i <= len1; i++) {
            for(int j = 1; j <= len2; j++) {
                if(word1[i - 1] == word2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        // Length of LCS
        int len = dp[len1][len2];
        // Minimum deletions
        return (len1 - len) + (len2 - len);
    }
};

*/