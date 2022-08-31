// https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1
// https://leetcode.com/problems/partition-equal-subset-sum/

#include<bits/stdc++.h>
using namespace std;

/* leetcode
int dp[205][20005];

bool helper(int ind, int sum, vector<int> &nums){
	if(sum == 0) return true;
	if(ind < 0) return false;
	if(dp[ind][sum] != -1) return dp[ind][sum];

	int isPossible = helper(ind-1, sum, nums);
	if(sum - nums[ind] >=0)
		isPossible |= helper(ind-1, sum-nums[ind] , nums);
	return dp[ind][sum]=isPossible;
}

bool canPartition(vector<int> &nums){
	memset(dp, -1, sizeof(dp));
	int sum = accumulate(nums.begin(), nums.end(), 0);
	if((sum % 2) != 0) return false;
	sum = sum / 2;
	return helper(nums.size()-1, sum, nums);
}
*/
    int dp[105][100005];
    int helper(int ind, int sum, int nums[]){
    	if(sum == 0) return true;
    	if(ind < 0) return false;
    	if(dp[ind][sum] != -1) return dp[ind][sum];
    
    	int isPossible = helper(ind-1, sum, nums);
    	if(sum - nums[ind] >=0)
    		isPossible |= helper(ind-1, sum-nums[ind] , nums);
    	return dp[ind][sum]=isPossible;
    }
    
    int equalPartition(int N, int nums[]){
    	memset(dp, -1, sizeof(dp));
    	int sum = accumulate(nums, nums+N, 0);
    	// cout << sum;
    	if((sum % 2) != 0) return false;
    	sum = sum / 2;
    	return helper(N-1, sum, nums);
    }


int main(){
	// memset(dp, -1, sizeof(dp));
	int n;
	cin>> n;
	// vector<int> arr(n);
	// for(int i=0; i<n; i++){
	// 	cin >> arr[i];
	// }
	// cout << canPartition(arr);
	int nums[n];
	for(int i=0; i<n; i++)
		cin >> nums[i];
	cout << equalPartition(n, nums);
	return 0;
}
// Time Complexity: O(N*sum of elements) = O(N*S/2)
// Auxiliary Space: O(N*sum of elements)