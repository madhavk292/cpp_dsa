// https://leetcode.com/problems/longest-common-subsequence/
// https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1
#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];
int lcs(int i, int j, string &str1, string &str2){
	if(i<0 || j<0) return 0;
	if (dp[i][j] != -1) return dp[i][j];
	// remove one character from str1
	int ans = lcs(i-1, j, str1, str2);
	// remove one character from str2
	ans = max(ans, lcs(i, j-1, str1, str2));
	// remove one character from each str1 ans str2
	ans = max(ans, lcs(i-1, j-1, str1, str2) + (str1[i] == str2[j]));
	return dp[i][j] = ans;
}
int longestCommonSubsequence(string text1, string text2) {
	memset(dp, -1, sizeof(dp));
	return lcs(text1.size()-1, text2.size()-1, text1, text2);
}

int main(){
	// Declaring string
    string str1;
    // Taking string input using getline()
    getline(cin, str1);
    string str2;
    // Taking string input using getline()
    getline(cin, str2);
    cout << longestCommonSubsequence(str1, str2);
	return 0;
}
// TC = O(text1.length^2)