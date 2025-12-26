/*

class Solution {
    int find(string &str, int index1, int index2) {

        // Base case
        if(index1 > index2) {
            return 0;
        }

        if(index1 == index2) {
            return 1;
        }

        // If the current character is matched
        if(str[index1] == str[index2]) {
            return 2 + find(str, index1 + 1, index2 - 1);
        }

        // If not matched -> reduce both indices on by one and find maximum between them
        return max(find(str, index1 + 1, index2), find(str, index1, index2 - 1));
    }

    int findMem(string &str, int index1, int index2, vector<vector<int>> &dp) {

        // Base case
        if(index1 > index2) {
            return 0;
        }

        if(index1 == index2) {
            return 1;
        }

        if(dp[index1][index2] != -1) {
            return dp[index1][index2];
        }

        // If the current character is matched
        if(str[index1] == str[index2]) {
            return dp[index1][index2] = 2 + findMem(str, index1 + 1, index2 - 1, dp);
        }

        // If not matched -> reduce both indices on by one and find maximum between them
        dp[index1][index2] = max(findMem(str, index1 + 1, index2, dp), findMem(str, index1, index2 - 1, dp));

        return dp[index1][index2];
    }

public:
    int longestPalindromeSubseq(string s) {

        // Recursion
        // int len = s.length();
        // return find(s, 0, len - 1);


        // Recursion + Memoization
        int len = s.length();
        vector<vector<int>> dp(len, vector<int> (len, -1));
        return findMem(s, 0, len - 1, dp);
    }
};

*/