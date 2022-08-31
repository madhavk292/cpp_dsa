#include <iostream>
#include <unordered_set>
// #include <bits/stdc++.h>
using namespace std;

bool find3Number(int arr[], int n, int sum){
	for (int i = 0; i < n-2; ++i){
		unordered_set<int> s;
		int current = sum - arr[i];
		for(int j = i+1; j<n; ++j){
			if (s.find(current-arr[j]) != s.end()){
				cout << "triplets are: " << arr[i] 
				<< " "<< arr[j] << " "<< current- arr[j] << endl;
				return true;
			}
			s.insert(arr[j]);
		}
	}
	return false;
}

int main(){
	int n, sum;
	cin >> n >> sum;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	find3Number(arr, n, sum);

	return 0;
}