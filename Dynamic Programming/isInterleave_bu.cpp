// https://practice.geeksforgeeks.org/problems/interleaved-strings/1
// if A and B are distinct we can use greedy otherwise DP
#include<bits/stdc++.h>
using namespace std;

bool isInterleave(string A, string B, string C){
    //Your code here
    int m = A.size();
    int n = B.size();
    int c = C.size();
	bool dp[m+1][n+1];
	memset(dp, false, sizeof(dp));

	if(m+n != c) return false;

	for(int i=0; i<=m; i++){
		for(int j=0; j<=n; j++){
			// two empty string have an empty string as interleaving
			if(i==0 && j==0)
				dp[i][j] = true;

			// if A is empth
			else if(i==0){
				if(B[j-1] == C[j-1])
					dp[i][j] = dp[i][j-1];
			}

			// if B is empth
			else if(j==0){
				if(A[j-1] == C[j-1])
					dp[i][j] = dp[i-1][j];
			}

			// if current char matche with A
			else if(A[i-1] == C[i+j-1] && B[j-1] != C[i+j-1])
				dp[i][j] = dp[i-1][j];

			else if(A[i-1] != C[i+j-1] && B[j-1] == C[i+j-1])
				dp[i][j] = dp[i][j-1];

			else if(A[i-1] == C[i+j-1] && B[j-1] == C[i+j-1])
				dp[i][j] = dp[i-1][j] || dp[i][j-1];
		}
	}
	return dp[m][n];
}

int main(){
	cout << isInterleave("XYZ", "ABC", "XAZYBC");
	return 0;
}