#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10; // 1e5 means 1 × 10^5.

int dp[N];
int fibonacci(int n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	if(dp[n] != -1) return dp[n];
	return dp[n] = fibonacci(n-1) + fibonacci(n-2);
}

int fibonacci_bottom_up(int n){
	dp[0] = 0;
	dp[1] = 1;
	for(int i=2; i<=n; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];
}

int main(){
	int n;
	cin >> n;
	memset(dp, -1, sizeof(dp));	
	cout << fibonacci_bottom_up(n);
	return 0;
}
