// https://leetcode.com/problems/two-sum/submissions/
// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

#include<bits/stdc++.h>
using namespace std;

/* Leetcode
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    unordered_map<int, int> mpp;
    for(int i=0; i<nums.size(); i++){
       if(mpp.find(target - nums[i]) != mpp.end()){
           ans.push_back(mpp[target-nums[i]]);
           ans.push_back(i);
           return ans;
       } 
        mpp[nums[i]] = i;
    }
    return ans;
}
*/
int twoSum(vector<int>& nums, int target) {
    int ans=0;
    unordered_map<int, int> mpp;
    for(int i=0; i<nums.size(); i++){
    	int b = target - nums[i];
       if(mpp[b]){
           // ans.push_back(mpp[target-nums[i]]);
           // ans.push_back(i);
           ans += mpp[b];
       } 
        mpp[nums[i]]++;
    }
    return ans;
}


int main(){
	int n, target;
	cin >> n >> target;
	vector<int> nums(n);
	for(auto &it: nums)
		cin >> it;
	// vector<int> ans = twoSum(nums, target);
	int ans = twoSum(nums, target);
	// for(auto itt: ans)
	// 	cout << itt << " ";
	cout<< ans;
	return 0;
}