// Maximum Subarray Sum | Kadane's Algorithm

#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr){
	int sum =0;
	int maxi = INT_MIN;
	for(auto it : arr){
		sum += it;
		maxi = max(sum, maxi);
		if(sum < 0) sum = 0;
	}
	return maxi;
}

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for (auto &i: arr)
		cin >> i;
	cout << maxSubarraySum(arr);
	return 0;
}
// Time complexity - O(n)
// Space cpmplexity - O(1)