// https://leetcode.com/problems/coin-change/
// Return the fewest number of coins that you need to make up that amount. 
// If that amount of money cannot be made up by any combination of the coins, return -1.
#include<bits/stdc++.h>
using namespace std;

int coinChange(vector<int> &coins, int amount){
	int n = coins.size();
	int dp[n+1][amount+1];

	for(int i=0; i<=n; i++){
		for(int j=0; j<=amount; j++){
			if(j==0)
				dp[i][j] = 0;
			else if(i==0)
				dp[i][j] = 1e5;
			else if(coins[i-1] > j)
				dp[i][j] = dp[i-1][j];
			else
				dp[i][j] = min(1+dp[i][j-coins[i-1]], dp[i-1][j]);
		}
	}

	for(int i=0; i<=n; i++){
		for(int j=0; j<=amount; j++){
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	return dp[n][amount] > 1e4 ? -1 : dp[n][amount];
}

int main(){
	int m, amount;
	cin >> m >> amount;
	vector<int> coins(m);
	for (auto &it : coins)
		cin >> it;
	cout << coinChange(coins, amount);
	return 0;
}