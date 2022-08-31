#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	int left =0, i = 0, right = n-1;
	while(left < right){
		while(arr[left] % 2 == 0 && left < right)
			left++;
		while(arr[right] % 2 == 1 && left < right)
			right--;
		if (left < right){
			swap(arr[left], arr[right]);
			left++;
			right--;
		}
	}
	for(i =0; i<n; i++){
        if(arr[i] % 2 ==1)
            break;
    }
	sort(arr, arr+i);
	sort(arr+i, arr+n);
	cout << left << " " << right << endl;
	for (int i = 0; i < n; ++i){
		cout << arr[i] << " ";
	}
}	