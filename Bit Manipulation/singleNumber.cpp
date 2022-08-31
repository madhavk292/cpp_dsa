#include<bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int> nums) {
    // Code here.
    int n = nums.size();
    vector<int> ans;
    int res = nums[0];
	for(int i=1; i<n; i++){
		res ^= nums[i]; 
	}
	int right_bit = res & ~(res - 1); // to get the right most bit
	int x=0, y=0;
	for(int i=0; i<n; i++){
		if(nums[i] & right_bit){
			x ^= nums[i];
		}
		else
			y ^= nums[i];
	}
	if(x>y){
		ans.push_back(y);
		ans.push_back(x); 
	}
	else{
		ans.push_back(x);
		ans.push_back(y);
	}
	return ans;
}

int main(){
	vector<int> ans;
	vector<int> nums = {18, 24, 24, 21, 10, 29, 8, 10, 29, 18};
	ans = singleNumber(nums);
	for(auto ii: ans){
		cout << ii << " "; 
	}
	cout << endl;
	return 0;
}