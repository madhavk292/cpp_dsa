//all possible permutations for distinct values
#include<bits/stdc++.h>
using namespace std;

vector <vector<int>> ans;

int permute(vector <int> &a, int idx){
	if(idx == a.size()){
		ans.push_back(a);
		return 0;
	}
	for(int i=idx; i<a.size(); i++){
		swap(a[i], a[idx]);
		permute(a, idx+1);
		swap(a[i], a[idx]); // simple backtracking - for next call swap will not be consider
	}
	return 0;
}

/*using STL - time complexity: O(N!)
int permute(vector <int> &a){
	sort(a.begin(), a.end());
	do{
		ans.push_back(a);
	} while (next_permutation(a.begin(), a.end()));

	return 0;
}
*/

int main(){
	int n;
	cin >> n;
	vector <int> a(n);
	for(auto &i : a)
		cin >> i;
	permute(a, 0);
	// permute(a);
	for(auto v : ans){
		for(auto i : v)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}


// Time complexity - O(n!) - for n elemnt there will be n! possible permutation 