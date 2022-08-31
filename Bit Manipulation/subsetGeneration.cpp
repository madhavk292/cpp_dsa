// https://leetcode.com/problems/subsets/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void allSebset(vector<int> &arr, int n){
	// [1, 2, 3]
	for(int i=0; i<(1<<n); i++){ // (1<<n) == pow(2,n)
		// i =3 = 011 -> [1, 2]
		vector<int> subset;
		for(int j=0; j<n; j++){
			if((1<<j)&i)
				subset.push_back(arr[j]);
		}
	ans.push_back(subset);
	}
	
}


int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	allSebset(arr, n);
	for(auto ii: ans){
		for(auto i: ii){
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}