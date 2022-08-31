/*/https://atcoder.jp/contests/dp/tasks/dp_a - Atcoder 1D DP Questions
// https://youtu.be/mnuBvHbMNJM */

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int h[N];
int dp[N];

int frog(int i){
	if(i == 0) return 0;
	if(dp[i] != -1) return dp[i];
	int cost = INT_MAX;

	cost  = min(cost, frog(i-1) + abs(h[i]-h[i-1]));
	
	if(i>1)
		cost  = min(cost, frog(i-2) + abs(h[i]-h[i-2]));
	return dp[i] = cost;
}

int main(){
	memset(dp, -1, sizeof(dp));
	int n;
	cin >> n;
	for(int i=0; i<N; i++){
		cin>> h[i];
	}
	cout << frog(n-1) << endl;
	// for(int i=0; i<n; i++){
	// 	cout << dp[i] << " ";
	// }
	return 0;
}


//recursion = O(2^n)
//DP = O(n)