#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	int sum = 0, left_sum = 0;
	for (int i = 0; i < n; ++i){
		sum += arr[i];
	}
	cout << sum << endl;
	for (int i = 0; i < n; ++i){
		sum = sum - arr[i];
		if (sum == left_sum){
			cout << i+1 << endl;
			return i+1;
		}
		left_sum += arr[i];
	}
	cout << "No eqi point" <<endl;
	return -1;
}