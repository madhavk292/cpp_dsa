// https://leetcode.com/problems/merge-sorted-array/
// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1
#include<bits/stdc++.h>
using namespace std;

/*
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for(int i=0; i<m; i++){
        // take first element from arr1 
    	// compare it with first element of second array
    	// if condition match, then swap
    	if(nums1[i] > nums2[0])
    		swap(nums1[i], nums2[0]);

	    // then sort the second array
	    // put the element in its correct position
	    // so that next cycle can swap elements correctly
	    int k;
	    int first = nums2[0];
	    // insertion sort is used here
	    for (k = 1; k < n && nums2[k] < first; k++) {
	      nums2[k - 1] = nums2[k];
	    }
	    nums2[k - 1] = first;
    }
}
*/

// gap algorithm - time complexity O(nlogn)
void merge(long long arr1[], long long arr2[], int n, int m){ 
	int gap = ceil((float)(n+m)/2);
	while(gap>0){
		int ptr1 =0;
		int ptr2 =gap;
		while(ptr2<(m+n)){
			if(ptr2<n && arr1[ptr1]> arr1[ptr2])
				swap(arr1[ptr1], arr1[ptr2]);
			else if(ptr2>=n && ptr1<n && arr1[ptr1]> arr2[ptr2-n])
				swap(arr1[ptr1], arr2[ptr2-n]);
			else if(ptr2>=n && ptr1>=n && arr2[ptr1-n]> arr2[ptr2-n])
				swap(arr2[ptr1-n], arr2[ptr2-n]);
		ptr2++;
		ptr1++;
		}
		if(gap==1)
			gap=0;
		else
			gap = ceil((float)gap/2);
	}          
} 

/* leetcode
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	int gap = ceil((float)(n+m)/2);
	while(gap>0){
		int ptr1 =0;
		int ptr2 =gap;
		while(ptr2<(m+n)){
			if(ptr2<m && nums1[ptr1]> nums1[ptr2])
				swap(nums1[ptr1], nums1[ptr2]);
			else if(ptr2>=m && ptr1<m && nums1[ptr1]> nums2[ptr2-m])
				swap(nums1[ptr1], nums2[ptr2-m]);
			else if(ptr2>=m && ptr1>=m && nums2[ptr1-m]> nums2[ptr2-m])
				swap(nums2[ptr1-m], nums2[ptr2-m]);
		ptr2++;
		ptr1++;
		}
		if(gap==1)
			gap=0;
		else
			gap = ceil((float)gap/2);
	}
	for(int i=0; i<n; i++)
		nums1[m+i] = nums2[i];         
}
*/


int main(){
	int m, n;
	cin>> m>>n;
	// vector<int> nums1(m);
	// for(auto &it: nums1)
	// 	cin >>it;
	// vector<int> nums2(n);			
	// for(auto &it: nums2)
	// 	cin >>it;
	// merge(nums1, m, nums2, n);
	// for(auto it: nums1)
	// 	cout << it<<" ";
	// for(auto it: nums2)
	// 	cout << it<<" ";

	long long arr1[m];
	long long arr2[n];
	for(int i=0; i<m; i++){
		cin>>arr1[i];
	}
	for(int i=0; i<n; i++){
		cin>>arr2[i];
	}
	merge(arr1, arr2, m, n);
	for(int i=0; i<m; i++){
		cout<< arr1[i];
	}
	for(int i=0; i<n; i++){
		cout<<arr2[i];
	}
	return 0;
}