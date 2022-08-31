#include<bits/stdc++.h>
using namespace std;

int minimum_coin(int coins[], int v){
	int n = 9;
	vector<int> ans;
	int count = 0;
	for(int i=n-1; i>=0; i--){
		while(v>=coins[i]){
			ans.push_back(coins[i]);
			count++;
			v -= coins[i];
		}
	}
	for(auto i : ans)
		cout << i <<" ";
	cout << endl;
	return count;
}

int main(){
	int coins[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
	int v = 49;
	cout << minimum_coin(coins, v);	
	return 0;
}