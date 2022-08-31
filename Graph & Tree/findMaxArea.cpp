// https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1/
#include<bits/stdc++.h>
using namespace std;

int dfs(int i, int j, vector<vector<int>>& grid, int n, int m, int &count){
	if(i<0 || j<0) return count; 
	if(i>=n || j>=m) return count;
	if(grid[i][j] != 1) return count;
	grid[i][j] = 2;
	count++;

	dfs(i-1, j, grid, n, m, count);
	dfs(i+1, j, grid, n, m, count);
	dfs(i, j-1, grid, n, m, count);
	dfs(i, j+1, grid, n, m, count);

    // add diagonal in above code
    dfs(i-1, j-1, grid, n, m, count);
    dfs(i-1, j+1, grid, n, m, count);
    dfs(i+1, j-1, grid, n, m, count);
    dfs(i+1, j+1, grid, n, m, count);
	return count;
}


int main(){
	vector<vector<int>> grid;
	grid = {{1,1,0,0}, 
  		    {0,0,1,1}, 
  		    {0,0,0,0},
  			{0,1,1,1}};
  	cout << "Start:" << endl;
	int max_area = 0;
	int max_area1 = 0;
	int n = grid.size();
	int m = grid[0].size();
	for(int i=0; i < n; i++){
		for(int j=0; j < m; j++){
			if(grid[i][j] == 1){
				max_area1 = max_area;
				max_area = 0;
				max_area = max(max_area1, dfs(i, j, grid, n, m, max_area));
			}
		}	
	}
	cout <<max_area;
	return 0;
}
