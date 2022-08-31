/* variation of 0-1 Knapsack problem */
// https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1#
#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int isSubsetSum(int sum, int val[], int n){
    
    //Base Case
    // if (sum == 0)
    //     return 1;

    if(n == 0){
        if (sum == 0)
            return 1;
        return 0;
    }

    if(dp[n][sum]!=-1)
        return dp[n][sum];

    if (val[n-1] > sum)
        return dp[n][sum] = isSubsetSum(sum, val, n-1);
    else{
        return dp[n][sum] = (isSubsetSum(sum-val[n-1], val, n-1) + isSubsetSum(sum, val, n-1));
    }

}

int main(){
    int val[] = {9, 7, 0, 3, 9, 8, 6, 5, 7, 6};
    int sum = 31;
    int n = sizeof(val) / sizeof(val[0]);
    memset(dp, -1, sizeof(dp));
    cout << isSubsetSum(sum, val, n);
    return 0;
}