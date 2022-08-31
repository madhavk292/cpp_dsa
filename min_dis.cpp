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

	for (int i = 0; i < n; ++i){
		for (int j = i+1; j < n; ++j){
			if ((x == arr[i] && y == arr[j] 
				|| y == arr[i] && x == arr[j]) 
				&& min_dist > abs(i-j))
			{
				min_dist = abs(i-j);
			}
		}
	}
	cout << min_dist;
	return min_dist;
}	