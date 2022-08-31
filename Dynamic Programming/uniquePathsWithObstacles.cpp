// https://leetcode.com/problems/unique-paths-ii/
#include<bits/stdc++.h>
using namespace std;

long long int dp[105][105];
long long int mod = 1000000007;

int helper(int m, int n, vector<vector<int>>& obstacleGrid){
    if(dp[m][n] != -1) return dp[m][n];
    if(m>0 && n>0 && obstacleGrid[m-1][n-1] == 1) return 0;
    if(m==1 && n==1) return 1;
    if(m<=0 || n<=0) return 0;
    return dp[m][n] = (helper(m-1, n, obstacleGrid) + helper(m, n-1, obstacleGrid))%mod;
}

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid){
	    int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        memset(dp, -1, sizeof(dp));
        return helper(m, n, obstacleGrid);
}


int main(){
	vector<vector<int>> obstacleGrid{{{0, 0, 0}, 
  		      						  {0, 1, 0}, 
  		      						  {0, 0, 0}}};
	cout << uniquePathsWithObstacles(obstacleGrid) << endl;
	// for(int i=0; i<=3; i++){
	// 	for(int j=0; j<=2; j++){
	// 		cout << dp[i][j] << "  ";
	// 	}
	// 	cout << endl;
	// }
	return 0;
}