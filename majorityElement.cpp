#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}	
	int count=0, index, value, maj_count=0;
	for (int i = 0; i < n; ++i){
		if (count == 0){
			value = arr[i];
			count++;
		}
		else if(arr[i] != value){
			count--;
		}
		else
			count++;
	}
	for (int i = 0; i < n; ++i){
		if (value == arr[i])
		{
			maj_count++;
		}
	}
	cout << maj_count << endl;
	if (maj_count > (n/2))
	{
		cout << value;
	}
	else
		cout << "no majority element";

	return 0;
}