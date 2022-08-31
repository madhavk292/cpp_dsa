// https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
#include<bits/stdc++.h>
using namespace std;

int maxLen(vector<int>&A, int n){  
    // Your code here
	int sum = 0;
	int max_len =0;
	unordered_map<int, int> umap;
	for(int i=0; i<n; i++){
		sum += A[i];
		// cout << sum << endl;
		if(sum == 0){
			max_len = max(max_len, i+1);
		}
		else if(umap.find(sum) != umap.end()){
			max_len = max(max_len, i- umap[sum]);
		}
		else{
			umap[sum] = i;
		}
	}
	return max_len;
}

int main(){
	int n;
	cin >> n;
	vector<int> nums(n);	
	for(auto &it: nums)
		cin>>it;
	cout <<maxLen(nums, n);
	return 0;
}