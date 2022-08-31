// https://leetcode.com/problems/subsets/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
void allSebset(vector<int> &subset, int i, vector<int> &arr){
	// base condition
	if(i == arr.size()){
		ans.push_back(subset);
		return;
	}
	// do not add this element
	allSebset(subset, i+1, arr);

	// add this element
	subset.push_back(arr[i]);
	allSebset(subset, i+1, arr);

	subset.pop_back();
}

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	vector<int> empty;
	allSebset(empty, 0, arr);
	for(auto ii: ans){
		for(auto i: ii){
			cout << i << " ";
		}
		cout << endl;
	}

	return 0;
}