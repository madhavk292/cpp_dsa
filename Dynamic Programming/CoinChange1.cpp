// https://leetcode.com/problems/coin-change/
// Return the fewest number of coins that you need to make up that amount. 
// If that amount of money cannot be made up by any combination of the coins, return -1.
#include<bits/stdc++.h>
using namespace std;

int dp[10010]; // 0 <= amount <= 10^4

int helper(int amount, vector<int> &coins){
	if(amount == 0) return 0;
	if(dp[amount] != -1) return dp[amount];

	int ans = INT_MAX;
	for (auto coin: coins){
		if(amount-coin >= 0)
			ans = min(ans+0LL, helper(amount-coin, coins)+1LL);// LL id added to deal with
			//overflow - helper function can return INT_MAX+1  - LL - Long Long
	}
	return dp[amount] = ans;
}

int coinChange(vector<int> &coins, int n, int amount){
	memset(dp, -1, sizeof(dp));
	int ans = helper(amount, coins);
	return ans == INT_MAX ? -1 : ans;
}

int main(){
	int m, amount;
	cin >> m >> amount;
	vector<int> coins(m);
	for (auto &it : coins)
		cin >> it;
	cout << coinChange(coins, m, amount);
	return 0;
}