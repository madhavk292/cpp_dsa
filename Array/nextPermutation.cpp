// https://leetcode.com/problems/next-permutation/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i]; 
	}
	for(int i=0; i<n; i++){
		cout << arr[i] <<" "; 
	}
	cout<<endl;
	// next_permutation(arr, arr+n); // inbuild function to find the next permutation
	for(int i=0; i<n; i++){
		cout << arr[i] << " "; 
	}	
	return 0;
}



// for optimal one
// time complexity = O(n) + O(n) + O(n) = O(n)
// 				linearly traversing to get the break point
// 				linearly traversing from back to get the element lightly greater then break point
// 				reversal
//  space = O(1)