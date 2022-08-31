 // rotate array Clockwise
#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	cout << endl;
	while(t){
	int n, k;
	cin>> n >> k;
	int arr[n];
	for(auto i=0; i < n; i++){
		cin>> arr[i];
	}
	int arr1[k];
	int k1 = k;
	for(auto i=n-k; i< n; i++, k1--){
		arr1[k1-1] = arr[i];
	}
	for(auto i=n-1-k; i>=0; i--){
		arr[i+k] = arr[i];
	}
	for(auto i=0; i<k; i++){
		arr[i] = arr1[k-1-i];
	}
	// cout << endl;
	for(auto l=0; l < n; l++){
		cout << arr[l] <<" ";
	}
	cout << endl;
	for(auto l=0; l < k; l++){
		cout << arr1[l] <<" ";
	}
	cout << endl;
	// cout<< k <<" "<<n;
	t--;
	}
	return 0;
	
}
