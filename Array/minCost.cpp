// https://www.codingninjas.com/codestudio/problems/morty-and-his-array_1807154
#include<bits/stdc++.h>
using namespace std;


int minCost(int n, int k, vector<int> &values) {
    // Write your code here.
    int cost = INT_MAX;
    
}

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> values(n);
	for(int i=0; i<n; i++){
		cin >> values[i];
	}
	cout << minCost(n, k, values);
	return 0;
}


