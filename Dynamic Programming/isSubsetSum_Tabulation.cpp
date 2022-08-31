#include<bits/stdc++.h>
using namespace std;

int max(int a, int b){
    return (a < b) ? b : a;
}

bool isSubsetSum(int sum, int set[], int n){
    

    // The value of subset[i][j] will be true if
    // there is a subset of set[0..j-1] with sum
    // equal to i
    bool subset[n + 1][sum + 1];
  
    // If sum is 0, then answer is true
    for (int i = 0; i <= n; i++)
        subset[i][0] = true;
  
    // If sum is not 0 and set is empty,
    // then answer is false
    for (int i = 1; i <= sum; i++)
        subset[0][i] = false;
  
    // Fill the subset table in bottom up manner
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < set[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= set[i - 1])
                subset[i][j] = subset[i - 1][j]
                               || subset[i - 1][j - set[i - 1]];
        }
    }
  

     for (int i = 0; i <= n; i++)
     {
       for (int j = 0; j <= sum; j++)
          printf ("%4d", subset[i][j]);
       printf("\n");
     }

    return subset[n][sum];
}



int main(){
    int val[] = {3, 2};
    int sum = 4;
    int n = sizeof(val) / sizeof(val[0]);
    cout << isSubsetSum(sum, val, n);
    return 0;
}