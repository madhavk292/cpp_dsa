#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int dp[N];
int numberOfWaysToTile(long long n)
{
    //  Write your code here.
	if(n<=2) return n;
	if(dp[n] != -1) return dp[n];
	return dp[n] = numberOfWaysToTile(n-1) + numberOfWaysToTile(n-2);
}

int main(){
	int n;
	cin >> n;
	memset(dp, -1, sizeof(dp));	
	cout<< numberOfWaysToTile(n);	
	return 0;
}

