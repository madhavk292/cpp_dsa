// lower_bound-upper_bound
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	int x;
	cin >> x;
	int *low = lower_bound(arr, arr+n, x);
	cout << low-arr << endl;
	return 0;
}