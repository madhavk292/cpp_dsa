#include<iostream>
#include<algorithm>
// #include<bits/stdc++.h>

using namespace std;

int findPivot(int arr[], int n){
	int lb = 0, ub = n-1;
	while(lb<=ub){
		int mid = lb + (ub - lb)/2;
		if (arr[mid] > arr[mid+1])
			return mid;
		else if (arr[mid] < arr[mid-1])
			return mid -1;
		else if (arr[lb] > arr[mid])
			ub = mid -1;
		else
			lb = mid +1;
	}
	return -1;
};

int binarySearch(int arr[], int lb, int ub, int x){
	while(lb<=ub){
		int mid = lb + (ub-lb)/2;
		if(arr[mid] == x)
			return mid;
		else if (arr[mid] < x)
			lb = mid+ 1;
		else if (arr[mid] > x)
			ub = mid - 1;
	}
	return -1;
};

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	int x;
	cin >> x;
	int index = findPivot(arr, n);
	cout << index <<endl;
	int first = binarySearch(arr, 0, (arr+index)-arr, x);
	int second = binarySearch(arr, (arr+index+1)-arr, (arr+n)-arr, x);
	if(first>second)
		cout << first;
	else
		cout << second;
	// return -1;
}