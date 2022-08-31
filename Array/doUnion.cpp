
// C++ program to find union of
// two sorted arrays
#include<bits/stdc++.h>

using namespace std;

int doUnion(int arr1[], int arr2[], int m, int n){
	int count = 0;
	int i = 0, j = 0;
	while( i<m && j<n){
		if (i>0 && arr1[i] == arr1[i-1])
			i++;
		if (j>0 && arr2[j] == arr2[j-1])
			j++;
		
		if (arr1[i] == arr2[j]){
			count++;
			cout <<count<< " "<<arr1[i]<<" "<<arr2[j] <<endl;
			i++;
			j++;
			continue;
		}
		if (arr1[i] < arr2[j]){
			count++;
			cout <<count<< " "<<arr1[i]<<" "<<arr2[j] <<endl;
			i++;
			continue;		
		}
		if (arr1[i] > arr2[j]){
			count++;
			cout <<count<< " "<<arr1[i]<<" "<<arr2[j] <<endl;
			j++;
			continue;
		}
	}
	if(i<m){
	// 	count+= m-i;
		for(int i; i<m; i++){
			if(arr1[i] != arr1[i-1])
				count++;
		}
	}
	if(j<n){
		for(int j; j<n; j++){
			if(arr2[j] != arr2[j-1])
				count++;
		}
	}
	// return count + m-(i+1) + n-(j+1);
	cout << i << " "<<j << endl;
	return count;
}
int main(){
	int arr1[] = {2, 5, 7, 8};
	int arr2[] = {2, 2, 9, 9, 10, 11};

	cout<<doUnion(arr1, arr2, 4, 6);
	return 0;
}