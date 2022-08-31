// https://leetcode.com/problems/unique-paths/
// https://practice.geeksforgeeks.org/problems/count-all-possible-paths-from-top-left-to-bottom-right3011/1/#
#include<bits/stdc++.h>
using namespace std;

long long int dp[105][105];
long long int MOD = 1000000007;

long long int helper(int m, int n) {
	if(dp[m][n] != -1) return dp[m][n];
	if(m==1 && n==1) return (long long int)1;
	if(m<=0 || n<=0) return (long long int)0;
	return dp[m][n] = (helper(m-1, n) + helper(m,  n-1)) % MOD;
}
long long int uniquePaths(int m, int n) {
	memset(dp, -1, sizeof(dp));
	return helper(m, n);
}

/* bottom-up method
class Solution {
    public int uniquePaths(int m, int n) {
        int count[][] = new int[m][n]; 
        for (int i = 0; i < m; i++) 
            count[i][0] = 1; 
        for (int j = 0; j < n; j++) 
            count[0][j] = 1; 
        for (int i = 1; i < m; i++) { 
            for (int j = 1; j < n; j++) 
                count[i][j] = count[i - 1][j] + count[i][j - 1];
        } 
        return count[m - 1][n - 1]; 
    }
}
*/

int main(){
	cout << uniquePaths(3, 2) << endl;
	for(int i=0; i<=3; i++){
		for(int j=0; j<=2; j++){
			cout << dp[i][j] << "  ";
		}
		cout << endl;
	}
	return 0;
}