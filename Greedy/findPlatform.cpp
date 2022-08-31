// https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1
#include<bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n){
	// Your code here
	sort(arr, arr+n);
	sort(dep, dep+n);
	int pleat=1, maximum = 1;
	int i = 1, j = 0;
	while(i<n && j<n){
		if(arr[i] <= dep[j]){
			pleat++;
			i++;
		}
		else{
			pleat--;
			j++;
		}
		if(pleat > maximum){
			maximum = pleat;
		}
	}
	return maximum;
}


int main(){
	int arr[] = {900,  940,  950, 1100, 1500, 1800};
	int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
	int n = 6;
	int maximum = 0;
	maximum = findPlatform(arr, dep, n);
	cout << maximum;
	return 0;
}

