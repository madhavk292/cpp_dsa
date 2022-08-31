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
	int first, second, flag=0;
	if (n<2)
		return -1;
	else{
		first = arr[0];
		for(auto i=1; i<n; i++){
			if (arr[i] > first){
				second = first;
				first = arr[i];
				flag = 1;
			}
			if (arr[i] > second && arr[i] < first){
				second = arr[i];
				flag = 1;
			}
		}
		if (flag == 0)
			cout << "no second";
		else
			cout << second;
		// for(auto i=0; i<n; i++){
		// 	cout << arr[i] << " ";
		// }
		// cout << endl;
		// cout << second;                               
		// return second;
	}
	return 0;
}