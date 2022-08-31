// https://leetcode.com/problems/longest-palindromic-substring/
#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
	int n = s.size();
	bool dp[n][n];
	memset(dp, 0, sizeof(dp));

	int start=0, end=0;

    for (int i = 0; i < n; ++i)
        dp[i][i] = true;

    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            start = i;
            end = i+1;
        }
    }

	for(int k=2; k<n; k++){
		for(int i=0; i<n-k; ++i){
			int j = i+k;
			if(dp[i+1][j-1] && s[i]==s[j]){
				dp[i][j] = 1;
				start = i;
				end = j;
			}
		}
	}

	cout << start << " "<< end << endl;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return s.substr(start, end-start+1);
}

int main(){
	string s;
	cin >> s;
	cout << longestPalindrome(s);
	return 0;
}