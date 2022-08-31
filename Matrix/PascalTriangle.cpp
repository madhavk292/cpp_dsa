// https://leetcode.com/problems/pascals-triangle/submissions/
#include<bits/stdc++.h>
using namespace std;

int printMatrix(vector<vector<int>> & matrix){
	for (int i = 0; i < matrix.size(); i++) {
    	for (int j = 0; j <= i; j++) {
      		cout << matrix[i][j] << " ";
    	}
    	cout << "\n";
  	}	
  	return 0;
}

vector<vector<int>> generatePascal(int numRows) {
	vector<vector<int>> r(numRows);

    for (int i = 0; i < numRows; i++) {
        r[i].resize(i + 1);
        r[i][0] = r[i][i] = 1;

        for (int j = 1; j < i; j++)
            r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
    }
    printMatrix(r);
    return r;
}

int main(){
	int n;
	cin >> n;
	generatePascal(n);
	return 0;
}

// Time and Space Complexity = O(numRows^2).
// Time complexity of factorial is O(N)