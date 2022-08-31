#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(auto i=0; i<n; i++){
		cin >> arr[i];
	}
	int first, second, third;
	if (n<3)
		return -1;
	else{
		first = arr[0];
		if(arr[1] > first){
			second = first;
			first = arr[1];
		}
		else
			second = arr[1];
		for(auto i=2; i<n; i++){
			if (arr[i] > first){
				third = second;
				second = first;
				first = arr[i];
			}
			if (arr[i] > second && arr[i] < first){
				third = second;
				second = arr[i];
			}
			if (arr[i] > third && arr[i] < second){
				third = arr[i];
			}
		}
		cout << third;
	}
	return 0;
}