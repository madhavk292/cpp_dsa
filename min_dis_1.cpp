#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n, x, y, min_dist = INT_MAX;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	cin >> x >> y;
	int prev_index = -1;
	for (int i = 0; i < n; ++i){
		if (x == arr[i] || y == arr[i]){
			if (prev_index != -1 && arr[i] != arr[prev_index]){
				min_dist = min(min_dist, i- prev_index);
			}
			prev_index = i;
		}
	}
	if (min_dist>n){
		cout << "No min distance"<< endl;
		return -1;
	}
	else{
		cout << min_dist << endl;
		return 1;
	}

}	