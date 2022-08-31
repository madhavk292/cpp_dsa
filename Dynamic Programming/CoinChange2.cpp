// https://leetcode.com/problems/coin-change-2/
// Return the number of combinations that make up that amount. If that amount 
// of money cannot be made up by any combination of the coins, return 0.

#include<bits/stdc++.h>
using namespace std;

int dp[310][10010]; // 0 <= amount <= 10^4

int helper(int ind, int amount, vector<int> &coins){
	if(amount == 0) return 1;
	if(ind<0) return 0;
	if(dp[ind][amount] != -1) return dp[ind][amount];

	int ways = 0;
	for (int coin_amount=0; coin_amount<=amount; coin_amount+=coins[ind]){
		ways += helper(ind-1, amount-coin_amount, coins);
	}
	return dp[ind][amount] = ways;
}

int coinChange(vector<int> &coins, int n, int amount){
	memset(dp, -1, sizeof(dp));
	return helper(coins.size()-1, amount, coins);
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