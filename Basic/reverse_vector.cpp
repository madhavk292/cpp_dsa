#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<int>> matrix;
	vector<int> ans = {1, 3, 4};
	vector<int> ans1 = {2, 3, 4};
	matrix.push_back(ans1);
	reverse(ans.begin(), ans.end());
	matrix.push_back(ans);
	for (int i = 0; i < matrix.size(); i++) {
    	for (int j = 0; j < matrix[0].size(); j++) {
      		cout << matrix[i][j] << " ";
    	}
    	cout << "\n";
  	}
}