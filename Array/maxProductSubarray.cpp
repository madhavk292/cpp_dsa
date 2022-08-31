
// Brute Force

#include<bits/stdc++.h>
using namespace std;

/*
int maxProductSubarray(vector<int> &nums){
	int result = INT_MIN;
    for(int i=0;i<nums.size();i++) {
        for(int j=i;j<nums.size();j++) {
            int prod = 1;
            for(int k=i;k<=j;k++) 
                prod *= nums[k];
            result = max(result,prod);    
        }
    }
	return result;
} */

// optimal
int maxProductSubarray(vector<int> &nums){
    int result = nums[0];
    int ma = result;
    int mi = result;
    for(int i=1; i<nums.size(); i++){
        if(nums[i] < 0)
            swap(ma, mi);
        ma = max(nums[i], ma*nums[i]);
        mi = min(nums[i], mi*nums[i]);
        result = max(ma, result);
    }
    return result;
}

int main(){
	int n;
	cin >> n;
	vector<int> arr(n);
	for (auto &i: arr)
		cin >> i;
	cout << maxProductSubarray(arr);
	return 0;
}