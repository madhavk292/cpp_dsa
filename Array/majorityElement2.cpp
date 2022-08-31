// https://leetcode.com/problems/majority-element-ii/

#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
	vector<int> ans;
	int num1 = -1;
	int num2 = -1;
	int count1 = 0;
	int count2 = 0;
	for(auto it: nums){
		if(it == num1) count1++;
		else if(it == num2) count2++;
		else if(count1 == 0){
			num1 = it;
			count1++;	
		}
		else if(count2 == 0){
			num2 = it;
			count2++;
		}
		else{
			count2--;
			count1--;
		}
	}
	int count =0;
	for(int i=0; i< nums.size(); i++){
		if(nums[i] == num1)
			count++;
	}
	if(count> floor(nums.size()/3))
		ans.push_back(num1);
	if(num1!=num2){
		count =0;
		for(int i=0; i< nums.size(); i++){
			if(nums[i] == num2)
				count++;
		}

	if(count> floor(nums.size()/3))
		ans.push_back(num2);
	}
	return ans; 
}

int main(){
	int n;
	cin >> n;
	vector<int> nums(n);
	for (auto &i:nums)
		cin >> i;
	vector<int> ans;
	ans = majorityElement(nums);
	for (auto ii:ans)
		cout << ii << " ";
	return 0;
}