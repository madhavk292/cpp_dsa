#include<bits/stdc++.h>
using namespace std;

//uper trangula mateix then lower trangular matrix
/*
void antiDigonal(vector<vector<int>> &matrix){
	int m = matrix.size();
	for(int i=0; i<m; i++){
		int row =0, column =i;
		while(column>=0){
			cout << matrix[row][column];
			row++;
			column--;
		}
		cout << endl;
	}

	for(int i=1; i<m; i++){
		int row =i, column =m-1;
		while(row<=m-1){
			cout << matrix[row][column];
			row++;
			column--;
		}
		cout << endl;
	}
}
*/

void antiDigonal(vector<vector<int>> &matrix){
	int m = matrix.size();
	vector<vector<int>> ans(2*m-1);
	for(int i=0; i<m; i++){
		for(int j=0; j<m; j++){
			ans[i+j].push_back(matrix[i][j]);
		}
	}
	for(int i=0; i<ans.size(); i++){
		for(int j=0; j<ans[i].size(); j++){
			cout<< ans[i][j];
		}
		cout << endl;
	}
}

int main(){
	vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,10}};
	antiDigonal(matrix);
	return 0;
}