// https://leetcode.com/problems/rotate-image/

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

  //transposing the matrix
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
        swap(matrix[i][j], matrix[j][i]);
      }
    }
    //reversing each row of the matrix
  	for (int i = 0; i < n; i++) {
    	reverse(matrix[i].begin(), matrix[i].end());
  }
}

int main(){
	int n;
	cin>> n;
  	vector<vector<int>> matrix(n, vector<int> (n, 0));
  	for(auto &v : matrix){
		for(auto &i : v)
			cin>>i;
	}
	rotate(matrix);
  	for(auto v : matrix){
		for(auto i : v)
			cout << i << " ";
		cout << endl;
	}
	return 0;
}

// time complexity - O(N^2)
// space complexity - O(1)