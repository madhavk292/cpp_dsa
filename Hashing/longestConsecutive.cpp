// https://leetcode.com/problems/longest-consecutive-sequence/
// https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> set;
    for(int i=0; i<nums.size(); i++){
    	set.insert(nums[i]);
    }

    int ans =0;
    for(int i=0; i<nums.size(); i++){
    	if(!set.count(nums[i] -1)){
    		int currentNum = nums[i];
    		int currentAns = 1;

    		while(set.find(currentNum +1) != set.end()){
    			currentNum += 1;
    			currentAns += 1;
    		}
    		ans = max(ans, currentAns);
    	}
    }
    return ans;
}

int main(){
	int n;
	cin >> n;
	vector<int> nums(n);	
	for(auto &it: nums)
		cin>>it;
	cout << longestConsecutive(nums);
	return 0;
}