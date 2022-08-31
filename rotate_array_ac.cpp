 // rotate array Anti-Clockwise
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	// cout << endl;
	while(t){
	int n, k;
	cin>> n >> k;
	// cout << endl;
	int arr[n];
	for(auto i=0; i < n; i++){
		cin>> arr[i];
	}
	reverse(arr, arr+k);
	reverse(arr+k, arr+n);

	reverse(arr, arr+n);
	for(auto l=0; l < n; l++){
		cout << arr[l] <<" ";
	}
	cout << endl;
	t--;
	}
	return 0;
}

// int arr_reverce(int &i, int &j){
// 	for(i,j; i!=j||j<i; i++, j--){
// 		int temp;
// 		temp = *j;
// 		*j = *i;
// 		*i = temp;
// 	}
// }