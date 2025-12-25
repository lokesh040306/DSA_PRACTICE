/*

class Solution {
private:
    int find(string text1, int index1, string text2, int index2) {

        // Base case
        if(index1 < 0 || index2 < 0) {
            return 0;
        }

        // If the current character is matched
        if(text1[index1] == text2[index2]) {
            return 1 + find(text1, index1 - 1, text2, index2 - 1);
        }

        // If not matched -> reduce both indices on by one and find maximum between them
        return 0 + max(find(text1, index1 - 1, text2, index2), find(text1, index1, text2, index2 - 1));
    }

    int findMem(string &text1, int index1, string &text2, int index2, vector<vector<int>> &dp) {

        // Base case
        if(index1 < 0 || index2 < 0) {
            return 0;
        }

        if(dp[index1][index2] != -1) {
            return dp[index1][index2];
        }

        // If the current character is matched
        if(text1[index1] == text2[index2]) {
            dp[index1][index2] = 1 + findMem(text1, index1 - 1, text2, index2 - 1, dp);
            return dp[index1][index2];
        }

        // If not matched -> reduce both indices on by one and find maximum between them
        dp[index1][index2] = max(findMem(text1, index1 - 1, text2, index2, dp), findMem(text1, index1, text2, index2 - 1, dp));

        return dp[index1][index2];
    }

public:
    int longestCommonSubsequence(string text1, string text2) {
        
        // Recursion
        // int len1 = text1.length();
        // int len2 = text2.length();
        // return find(text1, len1 - 1, text2, len2 - 1);

        // Recursion + Memoization
        // int len1 = text1.length();
        // int len2 = text2.length();
        // vector<vector<int>> dp(len1, vector<int>(len2, -1));
        // return findMem(text1, len1 - 1, text2, len2 - 1, dp);


        // Tabulation
        int len1 = text1.length();
        int len2 = text2.length();

        vector<vector<int>> dp(len1 + 1, vector<int> (len2 + 1, 0));

        for(int i = 0; i <= len1; i++) dp[i][0] = 0;
        for(int j = 0; j <= len2; j++) dp[0][j] = 0;

        // Fill DP table bottom-up
        for(int i = 1; i <= len1; i++) {
            for(int j = 1; j <= len2; j++) {
                if(text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[len1][len2];
    }
};

*/