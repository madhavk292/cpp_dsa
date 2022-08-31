// https://leetcode.com/problems/reverse-pairs/
#include<bits/stdc++.h>
using namespace std;

int merge(int arr[],int temp[],int left,int mid,int right)
{
    int rev_pair_count=0;
    int jj = mid;
    for (int i = left; i <= mid-1; i++) {
	    while (jj <= right && arr[i] > 2LL * arr[jj]) {
	    	jj++;
	    }
    	rev_pair_count += (jj - (mid));
  	}
    

    int i = left;
    int j = mid;
    int k = left;
    while((i <= mid-1) && (j <= right)){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid - 1)
        temp[k++] = arr[i++];

    while(j <= right)
        temp[k++] = arr[j++];

    for(i = left ; i <= right ; i++)
        arr[i] = temp[i];
    
    return rev_pair_count;
}


int merge_sort(int arr[], int temp[], int low, int high){
	int count = 0;
	if(low < high){
		int mid = low+(high-low)/2;
		count += merge_sort(arr, temp, low, mid);
		count += merge_sort(arr, temp, mid+1, high);
		count += merge(arr, temp, low, mid+1, high);
	}
	return count;

}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int temp[n];
	cout << merge_sort(arr, temp, 0, n-1);
	cout << endl;
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
}

// TC = O(nlogn) SC = O(n) it will midify the array so make a copy