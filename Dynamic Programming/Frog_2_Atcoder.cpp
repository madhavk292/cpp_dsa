/*/https://atcoder.jp/contests/dp/tasks/dp_b
// https://youtu.be/mnuBvHbMNJM */

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int h[N];
int dp[N];
int k;

int frog(int i){
	if(i == 0) return 0;
	if(dp[i] != -1) return dp[i];
	int cost = INT_MAX;

	for(int j=1; j<=k; ++j){
		if(i-j>=0)
			cost  = min(cost, frog(i-j) + abs(h[i]-h[i-j]));
	}
	return dp[i] = cost;
}

int main(){
	memset(dp, -1, sizeof(dp));
	int n;
	cin >> n >> k;
	for(int i=0; i<N; i++){
		cin>> h[i];
	}
	cout << frog(n-1) << endl;
	for(int i=0; i<n; i++){
		cout << dp[i] << " ";
	}
	return 0;
}


//recursion = O(2^n)
//DP = O(N*k) N function call and k size loop in each function call