// Number of occurrence
#include<iostream>
using namespace std;

int first_(int arr[], int x, int n){
	int lb = 0, ub = n-1, first = -1;
	while(lb<=ub){
		int mid = lb + (ub - lb)/2;
		if (arr[mid]>x){
			ub = mid -1;
		}
		else if(arr[mid]<x){
			lb = mid +1;
		}
		else{
			first = mid;
			ub = mid -1;
		}
	}
	return first;

}

int last_(int arr[], int x, int n){
	int lb = 0, ub = n-1, last = -1;
	while(lb<=ub){
		int mid = lb + (ub - lb)/2;
		if (arr[mid]>x){
			ub = mid -1;
		}
		else if(arr[mid]<x){
			lb = mid +1;
		}
		else{
			last = mid;
			lb = mid +1;
		}
	}
	return last;

}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	int x;
	cin >> x;
	int first = first_(arr, x, n);
	int last = last_(arr, x, n);
	if (first < 0){
		cout << "0";
	}
	else if(first == last)
		cout << "1";
	else
		cout << last - first;
   	return 0;
}
