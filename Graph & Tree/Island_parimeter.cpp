// https://leetcode.com/problems/island-perimeter/
#include<bits/stdc++.h>
using namespace std;

int dfs(int i, int j, vector<vector<int>>& grid, int n, int m, int &count){
	if(i<0 || j<0) return ++count; 
	if(i>=n || j>=m) return ++count;
	if(grid[i][j] == 0) return ++count;
	if(grid[i][j] == 2) return count;
	grid[i][j] = 2;

	dfs(i-1, j, grid, n, m, count);
	dfs(i+1, j, grid, n, m, count);
	dfs(i, j-1, grid, n, m, count);
	dfs(i, j+1, grid, n, m, count);
	return count;
}


int main(){
	vector<vector<int>> grid;
	grid = {{1,1,0,0}, 
  		    {0,0,0,0}, 
  		    {0,0,0,0},
  			{0,0,0,0}};
  	cout << "Start:" << endl;
	int island_parimeter = 0;
	int n = grid.size();
	int m = grid[0].size();
	for(int i=0; i < n; i++){
		for(int j=0; j < m; j++){
			if(grid[i][j] == 1){
				island_parimeter =	dfs(i, j, grid, n, m, island_parimeter);
				cout << island_parimeter;
				return island_parimeter;
			}
		}	
	}
	return 0;
}
