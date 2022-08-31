// https://practice.geeksforgeeks.org/problems/rod-cutting0840/1
// unbounded 

#include<bits/stdc++.h>
using namespace std;

int dp[1005];
// maximum value obtain from given length
int func(int len, vector<int> &prices){
    if(len == 0) return 0;
    if(dp[len] != -1) return dp[len];
    int ans =0;
    for(int len_to_cut = 1; len_to_cut <= prices.size(); len_to_cut++){
        if(len - len_to_cut >= 0){
            ans = max(ans, func(len - len_to_cut, prices) + prices[len_to_cut -1]);
        }
    }
    return dp[len] = ans;
}


int cutRod(int price[], int n) {
    //code here
    memset(dp, -1, sizeof(dp));
    vector<int> prices(price, price+n);
    return func(n, prices);
}

int main(){
        int n;
        cin >> n;
        int price[n];
        for(int i=0; i<n; i++)
            cin >> price[i];
        cout << cutRod(price, n);
        return 0;
}
// numver of function call = len; TC = O(len*len) = 1000*1000 =O(N^2)