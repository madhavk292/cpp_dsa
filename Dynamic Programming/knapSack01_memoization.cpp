//https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

#include<bits/stdc++.h>
using namespace std;

// A utility function that returns
// maximum of two integers
int max(int a, int b){
    return (a < b) ? b : a;
}

int dp[1001][1001];

int knapSack(int W, int wt[], int val[], int n){

    

    //Base Case
    if (n == 0 || W == 0)
        return 0;

    if(dp[n][W]!=-1)
        return dp[n][W];

    // If weight of the nth item is more
    // than Knapsack capacity W, then
    // this item cannot be included
    // in the optimal solution
    if (wt[n-1] > W)
        return dp[n][W] = knapSack(W, wt, val, n-1);

    // Return the maximum of two cases:
    // (1) nth item included
    // (2) not included
    else{
        return dp[n][W] = max(val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
            knapSack(W, wt, val, n-1));
    }

}

int solve(int W, int wt[], int val[], int n){
    dp[n][W];
    memset(dp, -1, sizeof(dp));
    return knapSack(W, wt, val, n);
}

int main(){
    int val[] = { 60, 100, 130 };
    int wt[] = { 10, 20, 30};
    int W = 40;
    int n = sizeof(val) / sizeof(val[0]);
    cout << solve(W, wt, val, n);
    return 0;
}  