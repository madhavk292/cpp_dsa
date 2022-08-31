#include<bits/stdc++.h>
using namespace std;

int maximumFrequency(vector<int> &arr, int n){
	unordered_map<int , pair<int, int>> m;
	for(int i =0; i<n; i++){
        m[arr[i]] = {1, i};
    }
    for(auto it: m){
    	cout << it.first << " " <<it.second.first<< " "<<it.second.second;
    	cout << endl;
    }
}

int main(){
	vector<int> arr = {2, 2, 3, 4};
	cout << maximumFrequency(arr, arr.size());
	return 0;
}