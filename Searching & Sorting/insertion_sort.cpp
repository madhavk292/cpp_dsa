#include<bits/stdc++.h>
using namespace std;


void insertionSort(vector<int>& vec){
	int i =0;
	for(int k=1; k<vec.size(); k++){
		int current = vec[k]; 
		for(i=k-1; i>=0 && current<vec[i]; i--){
			vec[i+1] = vec[i];
		}
		vec[++i] = current;

	}
}

int main(){
	int n;
	cin>>n;
	vector<int> vec(n);
	for(auto& it: vec)
		cin	>> it;
	for(auto it: vec)
		 cout<<it<<" ";
	insertionSort(vec);
	cout<< endl;
	for(auto it: vec)
		cout<< it<<" ";
	return 0;
}