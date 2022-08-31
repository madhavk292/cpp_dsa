#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1, 2, 3, 78};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << n << endl;
	for(int i=0; i<=(n/2)-1; i++){
		int temp=0;
		temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;
	}
	for(int j=0; j<=n-1; j++){
		cout << arr[j] << " ";
	}
}
