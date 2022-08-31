// gfg contest
#include<bits/stdc++.h>
using namespace std;

int i =0;
int start, end;
int subarr(int arr[], int start, int end){
	while(i<=end && arr[i + 1] <= arr[i]){
		i++;
	}
	end = i;
	cout << end;
	return 0;
}
int mingcd(int arr[] , int N){
    // Your code goes here 
	subarr(arr, 0, N-1);

	return 0;

}

int main(){
	int arr[] = { 5, 2, 3, 7, 1, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	mingcd(arr, n);
	return 0;
}