// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1/
#include<bits/stdc++.h>
using namespace std;

// const int N = 1e7+5;
int dp[10000005];
int helper(int ind, int arr[], int n){
    if(ind>=n-1) return 0;
    if(dp[ind] != -1) return dp[ind];
    if(arr[ind] == 0) return dp[ind];
    int minJump = INT_MAX-5;
    for(int i=1; i<=arr[ind] && i<n; i++){
     	minJump = min(minJump, 1+helper(ind+i, arr, n)); 
    }
    return dp[ind] = minJump;
}

int minJumps(int arr[], int n){
	if(arr[0] == 0) return -1; 
	memset(dp, -1, sizeof(dp));
    return helper(0, arr, n);
}

/* SC O(1)
int minJumps(int arr[], int n){
    // Your code here
    int maxR = arr[0];
    int step = arr[0];
    int jump = 1;
    if(n==1) return 0;
    else if(arr[0] == 0) return -1;
    else{
        for(int i=1; i<n; i++){
            if(i==n-1)
                return jump;
            maxR = max(maxR, i+arr[i]);
            step--;
            if(step==0){
                jump++;
                if(i>=maxR){
                    return -1;
                }
                step = maxR-i;
            }
        }
    }
} */

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cout << minJumps(arr, n);
	return 0;
}