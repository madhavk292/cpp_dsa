// https://leetcode.com/problems/number-of-islands/
// https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1
#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<char>>& grid, int n, int m){
	if(i<0 || j<0) return;
	if(i>=n || j>=m) return;
	if(grid[i][j] != '1') return;
	grid[i][j] = '2';

	dfs(i-1, j, grid, n, m);
	dfs(i+1, j, grid, n, m);
	dfs(i, j-1, grid, n, m);
	dfs(i, j+1, grid, n, m);
}


int main(){
	vector<vector<char>> grid;
	grid = {{'1','1','1','1','0'}, 
  		    {'1','1','0','1','0'}, 
  		    {'1','1','0','0','0'},
  			{'0','0','1','0','1'}};
	int island_count = 0;
	int n = grid.size();
	int m = grid[0].size();
	for(int i=0; i < n; i++){
		for(int j=0; j < m; j++){
			if(grid[i][j] == '0') continue;
			if(grid[i][j] == '2') continue;
			dfs(i, j, grid, n, m);
			island_count++;
		}
	}
	cout << island_count;
	return 0;
}
