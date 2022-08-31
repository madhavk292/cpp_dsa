#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	int lb = 0, ub = n-1;
	while(lb<=ub){
		int mid = (lb+ub)/2;
		if (arr[mid] == 0){
			lb = mid+1;
		}
		else if (arr[mid] == 1){
			if (mid == 0 || (mid > 0 && arr[mid-1] == 0)){
				cout << "transition point: "<<mid;
				return mid;	
			}
			ub = mid-1;
		}
	}
	cout << "no trasnsition point";
	return -1;
}