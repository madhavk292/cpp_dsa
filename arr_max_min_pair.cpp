// array max and min using compare in pairs

#include<iostream>
using namespace std;

void printArray(int arr[], int n){
for (int i=0; i<n; i++){
		cout<< arr[i]<<" ";
	}
}

int main(){
	int n, max, min, i;
	cout <<"Enter the number of element: "<<endl;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++){
		cin>> arr[i];
	}
	printArray(arr, n);
	if(n % 2 == 0){
		if(arr[0] > arr[1]){
			max = arr[0];
			min = arr[1];
		}
		else{
			max = arr[1];
			min = arr[0];
		}
		i = 2;
	}
	else{
		max = min = arr[0];
		i = 1;
	}
	while(i<n-1){
		if(arr[i] > arr[i+1]){
			if(arr[i] > max)
				max = arr[i];
			if(arr[i+1] < min)
				min = arr[i+1];
		}
		else{
			if(arr[i+1] > max)
				max = arr[i+1];
			if(arr[i] < min)
				min = arr[i];	
		}
		i += 2;
	}
	cout << "Max: " <<max <<" Min: "<<min<<endl;
}

// # comparisons
// if n is odd =  3*(n-1)/2\
// if n is even = 1 + 3*(n-2)/2 = 3n/2 -2