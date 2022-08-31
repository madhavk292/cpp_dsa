// https://leetcode.com/problems/median-of-two-sorted-arrays/
#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	if(nums2.size() < nums1.size()) return findMedianSortedArrays(nums2, nums1);
    int n = nums1.size();
    int m = nums2.size();
    int low =0, high = n;

    while(low <= high){
    	int cut_1 = (low+high) >> 1;
    	int cut_2 = (n+m+1) / 2 - cut_1;

    	int left_1 = cut_1 == 0 ? INT_MIN : nums1[cut_1 - 1];
    	int left_2 = cut_2 == 0 ? INT_MIN : nums2[cut_2 - 1];

    	int right_1 = cut_1 == n ? INT_MAX : nums1[cut_1];
    	int right_2 = cut_2 == m ? INT_MAX : nums2[cut_2];

    	if(left_1 <= right_2 && left_2 <= right_1){
    		if((n+m) % 2){
    			return max(left_1, left_2);
    		}
    		else
    			return (max(left_1, left_2) + min(right_1, right_2)) / 2.0;
    	}
    	else if(left_1 > right_2)
    		high = cut_1 - 1;
    	else
    		low = cut_1 + 1;
    }
    return 0.0;
}

int main(){
	vector<int> nums1 = {1,3, 5};
	vector<int> nums2 = {2, 4};
	cout << findMedianSortedArrays(nums1, nums2);	
	return 0;
}