// Kth max and min of an array
#include<iostream> 

using namespace std;

int main(){
	int n;
	cin>> n;
	int arr[n];
	for(int i=0; i < n; i++){
		cin>> arr[i];
	}
	int k, j=0;
	cin >> k;
	for(int j=0; j<k; j++){
		for(int l=j; l<n; l++){
			if(arr[j] > arr[l])
				swap(arr[j], arr[l]);
		}
	}
	cout << k << "th MIN is: " <<arr[k-1] << endl;
	for (int p=0; p<n; p++){
		cout<< arr[p]<<" ";
	}
}