/*


int findMem(string &s1, string &s2, int idx1, int idx2, vector<vector<int>> &dp) {
        
	// Base case
	if(idx1 < 0 || idx2 < 0) {
		return 0;
	}
	
	if(dp[idx1][idx2] != -1) {
		return dp[idx1][idx2];
	}
	
	if(s1[idx1] == s2[idx2]) {
		return dp[idx1][idx2] = 1 + findMem(s1, s2, idx1 - 1, idx2 - 1, dp);
	}
	
	return dp[idx1][idx2] = max(findMem(s1, s2, idx1 - 1, idx2, dp), findMem(s1, s2, idx1, idx2 - 1, dp));
}

string findLCS(int n, int m, string &s1, string &s2){

	// // Recursion + Memoization
	// vector<vector<int>> dp(n, vector<int> (m, -1));

	// // Step 1: Fill DP table using memoized recursion
	// findMem(s1, s2, n - 1, m - 1, dp);

	// // Step 2: Reconstruct LCS string from dp table
	// int i = n - 1, j = m - 1;
	// string str = "";
	// while(i >= 0 && j >= 0) {
	// 	// If characters match -> include it & move diagonally
	// 	if(s1[i] == s2[j]) {
	// 		str += s1[i];
	// 		i--;
	// 		j--;
	// 	}
	// 	else {

	// 		// If previous row has bigger LCS length -> move up
	// 		int up = (i > 0 ? dp[i - 1][j] : 0);
	// 		int left = (j > 0 ? dp[i][j - 1] : 0); 

	// 		if(up > left) {
	// 			i--;
	// 		}
	// 		else {
	// 			j--;
	// 		}
	// 	}
	// }

	// reverse(str.begin(), str.end());

	// return str;



	// Tabulation
	vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

	// for(int i = 0; i < n; i++) dp[i][0] = 0;        
	// for(int j = 0; j < m; j++) dp[0][j] = 0;

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			if(s1[i - 1] == s2[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = 0 + max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	int len = dp[n][m];
	string ans = "";
	for(int i = 0; i < len; i++) {
		ans += '$';
	}

	int index = len - 1;
	int i = n, j = m;
	while(i > 0 && j > 0) {
		if(s1[i - 1] == s2[j - 1]) {
			ans[index] = s1[i - 1];
			index--;
			i--;
			j--;
		}
		else if(dp[i - 1][j] > dp[i][j - 1]) {
			i--;
		}
		else {
			j--;
		}
	}

	return ans;
}

*/