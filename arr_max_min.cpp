#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {11, 22, 33, 66, 77};
	int min, max;
	max = min = arr[0];
	int n = sizeof(arr) / sizeof(arr[1]);
	for(int i=1; i<=n-1; i++){
		if(arr[i] > max){
			max=arr[i];
			cout<< "1st: "<<i <<endl;
			continue;
			cout << "2nd: "<< i<<endl;
		}
		cout << "2nd: "<< i<<endl;
		if(arr[i] < min){
			min=arr[i];
			cout << "3rd: "<< i<<endl;
		}
	cout<<"i: "<<i<<endl;
	}
	cout << max << " " << min <<endl;
}
