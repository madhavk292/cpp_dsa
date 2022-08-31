#include<bits/stdc++.h>
using namespace std;

void helper(int ind, int sum, vector<int> &arr, int N, vector<int> &sums){
	if(ind == N){
		sums.push_back(sum);
		return;
	}

	// pick the element
	helper(ind+1, sum+arr[ind], arr, N, sums);

	// did not pick the element
	helper(ind+1, sum, arr, N, sums);	
}

vector<int> subsetSums(vector<int> arr, int N){
    vector<int> sums;
    helper(0, 0, arr, N, sums);
    sort(sums.begin(), sums.end());
    for(auto i: sums)
    	cout<< i;
	return sums; 
}

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for(auto &it: arr)
		cin >> it;
	cout<< "Start";
	subsetSums(arr, n);
	return 0;
}