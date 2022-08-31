#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int arr1[], int n){
	// int arr[n];
	for(auto i=0,j=n-1; i<=j; i++, j--){
		swap(arr1[i], arr1[j]);
		// int temp = arr1[i];
		// arr1[i] = arr1[j];
		// arr1[j] = temp;
	}
	return 0;
}

int printArray(int arr[], int n){
	for (auto i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (auto i=0; i<n; i++){
		cin >> arr[i];
	}
	printArray(arr, n);
	cout << endl;
	reverse(arr, n);
	printArray(arr, n);
	return 0;
}