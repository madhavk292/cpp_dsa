// https://codewindow.in/nagarro-question-solved-the-card-game-codewindow-in/
#include<bits/stdc++.h>
using namespace std;

int theCardGame(int arr[], int n){
	// find the minimum subarray sum using kadane's algo
	int sum = INT_MAX;
	int current_sum=0;
	int arry_sum = 0;

	for(int i=0; i<n; i++){
		arry_sum += arr[i];
		current_sum += arr[i];
		sum = min(current_sum, sum);
		if(current_sum > 0)
			current_sum = 0;
	}
	cout << sum << endl;
	return arry_sum + (-2 * sum);
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << theCardGame(arr, n);
	return 0;
}