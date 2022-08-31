// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

#include<bits/stdc++.h>
using namespace std;

/* Brute Force - Time complexity: O(n^2)
int maxProfit(vector<int>& prices) {
	int profit = 0;
	for (int i=0; i < prices.size()-1; i++){
		for (int j=i+1; j < prices.size(); j++){
			if((prices[i] < prices[j]))
				profit = max(prices[j]-prices[i], profit);
		}
	}
	return profit;
}
*/
// optimal - Time complexity: O(n)
int maxProfit(vector<int>& prices) {
	int profit = 0;
	int minimal = INT_MAX;
	for (int i=0; i < prices.size(); i++){
		minimal = min(minimal, prices[i]);
		profit = max(profit, prices[i]- minimal);
	}
	return profit;
}
/*
//Here we are allowed to buy and sell multiple times.
int maxProfit(vector<int>& prices) {
    int profit = 0;
    for(int i=1; i<prices.size(); i++){
        if(prices[i]>prices[i-1])
            profit += prices[i]-prices[i-1];
    }
    return profit;
}
*/

int main(){
	int n;
	cin >> n;
	vector<int> prices(n);
	for (auto &it : prices)
		cin>> it;
	cout<< maxProfit(prices);
	// for (auto it : prices)
	// 	cout<< it;
	// cout<< endl<<prices.size();
	return 0;
}
