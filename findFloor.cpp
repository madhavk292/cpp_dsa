#include<iostream>
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
	int lb =0, ub = n-1;
	if (arr[0] > x){
		cout <<"No floor";
		return 0;
	}
	if (arr[n-1] < x){
		cout << n-1;
		return 0;
	}
    while(lb<=ub){
        int mid = (lb+ub)/2;
        if (arr[mid] == x)
        {
        	cout << mid;
        	return 0;
        }
        else if(arr[mid] > x && arr[mid-1]<x){
            cout << mid-1;
            return 0;
        }
        else if (arr[mid] < x && arr[mid+1] > x){
            cout << mid;
            return 0;
        }
        else if (arr[mid] > x)
            ub = mid -1;
        else
            lb = mid+1;
   }
   return 0;
}