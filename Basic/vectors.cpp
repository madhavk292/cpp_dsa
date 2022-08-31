#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v1;

	for (int i=0; i<=5; i++){
		v1.push_back(i);
	}
	int n;
	cin >> n;
	vector<int> v2(n);
	for (auto &it: v2)
		cin >> it;
	for(auto i : v2)
		cout << i << " ";
	cout << endl;
	for(auto i : v1)
		cout << i << " ";
	// int x;
	// x = v1.begin();
	// cout<<x;
	// for(auto i = v1.begin(); )
	return 0;
}