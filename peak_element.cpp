#include<iostream>
using namespace std;

int peakElement(int arr[], int n){
   int low = 0, high = n-1;
   while(low<=high){
       int mid = low + (high-low)/2;
       if (mid > 0 && mid < n-1){
            if (arr[mid] >= arr[mid-1] && arr[mid] >= arr[mid+1])
                return mid;
            else if(arr[mid] < arr[mid-1])
                high = mid - 1;
            else 
                low = mid + 1;
       }
       else if (mid == 0){
           if(arr[mid]>arr[mid+1] || n == 1)
                return 0;
            else
                return 1;
       }
       else if (mid == n-1){
            if(arr[mid] > arr[mid-1])
                return n-1;
            else
                return n-2;
   		}
   	}
   	return 0;
};


int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	cout << peakElement(arr, n);
	return 0;
}
