// Groovy's walk , Trilogy Innovatin
#include<bits/stdc++.h>
using namespace std;

int dp[105][105];
int mod = (int)(2e9);

int helper(int m, int n, vector<vector<int>>& obstacleGrid){
    if(dp[m][n] != -1) return dp[m][n];
    if(m>0 && n>0 && obstacleGrid[m-1][n-1] == -1) return 0;
    if(m==1 && n==1) return 1;
    if(m<=0 || n<=0) return 0;
    return dp[m][n] = helper(m-1, n, obstacleGrid) + helper(m, n-1, obstacleGrid)%mod;
}

int uniquePathsWithObstacles(int A, int B){
    vector<vector<int>> grid(A, vector<int>(A, 0));
    int n = grid.size();
    int m = grid[0].size();

    int toxic = ceil(A/2);
    for(int i=0; i<=B; i++){
        for(int j=0; j<=B; j++){
            grid[toxic-i][toxic-j] = -1;
            grid[toxic+i][toxic+j] = -1;
            grid[toxic-i][toxic+j] = -1;
            grid[toxic+i][toxic-j] = -1;
        }
    }

    for(auto v : grid){
        for(auto i : v)
            cout << i << " ";
        cout << endl;
}
    memset(dp, -1, sizeof(dp));
    return helper(m, n, grid);

    return 0;
}

int main(){
    int A, B;
    cin >> A >> B;
    cout << uniquePathsWithObstacles(A, B);
    return 0;
}
