// https://leetcode.com/problems/number-of-1-bits/
#include<bits/stdc++.h>
using namespace std;

/* iterate 32 times
int hammingWeight(uint32_t n) {
    int ans = 0;
    for(int i=0; i<32; i++){
        if((1<<i)&n)
            ans++;
    }
    return ans;
}
*/
// iterates only numers of 1's times 

int hammingWeight(uint32_t n) { //Brian Kernighan's approch
    int ans = 0;
    while(n!=0){
    	n = n & (n-1);
    	ans++;
    }
    return ans;
}


// recursive approach of above method
/*
int hammingWeight(uint32_t n) {
    if(n==0) return 0;
    if(n==1) return 1;

    return hammingWeight(n & (n-1)) + 1;
}
*/

int main(){
	cout<<hammingWeight(16)<< endl;
    cout<< __builtin_popcount(5);
	return 0;
}