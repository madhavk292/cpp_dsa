// https://practice.geeksforgeeks.org/problems/interleaved-strings/1
// if A and B are distinct we can use greedy otherwise DP
#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];
bool helper(string A, int m, string B, int n, string C, int lenC){
	if(lenC == 0) return 1;
	if(dp[m][n] != -1) return dp[m][n];
	int a, b;
	a = b = 0;
	if(m-1>=0 and A[m-1] == C[lenC-1])
		a = helper(A, m-1, B, n, C, lenC-1);
	if(n-1>=0 and B[n-1] == C[lenC-1])
		b = helper(A, m, B, n-1, C, lenC-1);
	return dp[m][n] = a or b;
}

bool isInterleave(string A, string B, string C){
    //Your code here
    memset(dp, -1, sizeof(dp));
    int m = A.size();
    int n = B.size();
    int lenC = C.size();
    if(m+n != lenC) return 0;
	return helper(A, m, B, n, C, lenC);
}

int main(){
	cout << isInterleave("XYZ", "ABC", "XAYBCZ");
	return 0;
}