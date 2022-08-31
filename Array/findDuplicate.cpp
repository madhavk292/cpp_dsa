
// https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
// https://leetcode.com/problems/find-the-duplicate-number/

#include<bits/stdc++.h>
using namespace std;

// gfg solution - doesn't work for 0
vector<int> findDuplicate(int arr[], int n) {
	vector<int> ans;
	int flag=-1;
	for(int i=0; i<n; i++){
		if(arr[abs(arr[i])]>=0)
			arr[abs(arr[i])] = -arr[abs(arr[i])];
		else{
			ans.push_back(abs(arr[i]));
			flag = 1;
		}
	}
	if(flag ==-1){
		ans.push_back(flag);
		return ans;
	}
	else
		return ans;
}


// leetcode solution - time complexity O(n)
/*
int findDuplicate(vector<int>& nums) {
	int slow = nums[0];
	int fast = nums[0];
	do{
		slow = nums[slow];
		fast = nums[nums[fast]];
	} while(slow != fast);
	
	fast = nums[0];
	while(slow != fast){
		slow = nums[slow];
		fast = nums[fast];
	}
	return slow;		
}
*/


// hash map(set) - time and space O(n) - 
// find, insert and erase take a constant amount of time O(1) on average.
/*
int findDuplicate(vector<int>& nums) {
	unordered_set<int> set;
	for(int i=0; i<nums.size(); i++){
		if (set.find(nums[i]) == set.end())
			set.insert(nums[i]);
		else
			return nums[i];
	}
	return 0;
}
*/

int main(){
	int n;
	cin >>n;
	// vector<int> nums(n);
	int nums[n];
	for(int i=0; i<n; i++){
		cin>>nums[i];
	}
	vector<int> ans = findDuplicate(nums, n);
	// cout<< findDuplicate(nums);
	for(auto it: ans)
		cout<< it << " ";
	return 0;
}