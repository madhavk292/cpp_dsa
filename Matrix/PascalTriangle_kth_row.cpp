// https://leetcode.com/problems/pascals-triangle/submissions/
#include<bits/stdc++.h>
using namespace std;

int binomial(int n, int k){
    if(k==0||k==n) return 1;
    if(k>n-k) k=n-k;
    int ans = 1;
    for (int i=0; i<k; i++){
        ans*=n-i;
        ans/=i+1;
    } 
    return ans;
}

vector<int> Solution(int n) {
    n = n-1;
    vector <int> ans;
    for(int i=0; i<=n; i++) ans.push_back(binomial(n, i));
    for(int j=0; j<ans.size(); j++)
        cout << ans[j] << " ";
    return ans;
}

int main(){
	int n;
	cin >> n;
	Solution(n);
	return 0;
}

// Time and Space Complexity = O(numRows^2).
// Time complexity of factorial is O(N)