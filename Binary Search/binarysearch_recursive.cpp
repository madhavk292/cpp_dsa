// https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&curated[]=1&sortBy=submissions
#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int k, int low, int high){
	if(high >= low){
		int mid = low + (high - low) / 2;

		if(arr[mid] == k)
			return mid;
		else if(arr[mid] > k)
			return bs(arr, k, low, mid-1);
		else
			return bs(arr, k, mid+1, high);
	}
	return -1;
}

int binarysearch(int arr[], int n, int k) {
    // code here
	return bs(arr, k, 0, n-1);
}

int main(){
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << binarysearch(arr, n, k);
	return 0;
}