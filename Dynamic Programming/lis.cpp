// The Longest Increasing Subsequence (LIS) problem is to find the length of the longest 
// subsequence of a given sequence such that all elements of the 
// subsequence are sorted in increasing order. For example, the length of LIS 
// for {10, 22, 9, 33, 21, 50, 41, 60, 80} is 6 and LIS is {10, 22, 33, 50, 60, 80}. 

#include<bits/stdc++.h>
using namespace std;
const int N = 25e2+10;
vector <int> a(N);
int dp[N];

int lis(int i){
	if(dp[i] != -1) return dp[i];
	int ans = 1;
	for(int j=0; j<i; j++){
		if(a[i] > a[j]){
			ans = max(ans, lis(j)+1);
		}
	}
	return dp[i] = ans;
}

int main(){
	memset(dp, -1, sizeof(dp));
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int ans = 0;
	for(int i=0; i<n; i++){
		ans = max(ans, lis(i));
	}
	cout << ans;
	return 0;
}

// recurssion time complexity - exponential
// dp time complexity - O(N^2) - N function call and N loop in each function call