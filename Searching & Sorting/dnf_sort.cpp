//Dutch National Flag & 012 sort
#include"bits/stdc++.h"

using namespace std;

void sort012(int arr[], int n){
	int low = 0;
	int mid = 0; 
	int high = n-1;
	while ( mid <= high){
		if(arr[mid] == 0){
			swap(arr[mid], arr[low]);
			low++;
			mid++;
			cout << "Zero";
			continue;
		}
		if(arr[mid] == 1){
			// mid = i;
			// swap(arr[i], arr[low]);
			// low++;
			mid++;
			cout << "One";
			continue;
		}
		if(arr[mid] == 2){
			swap(arr[mid], arr[high]);
			high--;
			cout << "Two" << high;
			continue;
		}
	}
	cout <<endl;
}
int main(){
	int a[] = {1, 2, 0};
	int nn = 3;
	for(int i=0; i<nn; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	sort012(a, nn);
	for(int i=0; i<nn; i++){
		cout << a[i] << " ";
	}
}