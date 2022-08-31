#include<bits/stdc++.h>
using namespace std;

int maxSubstring(string S){
    // Your code goes here
    int sum=0;
    int maxi = INT_MIN;
    for(auto str: S){
        if(str=='0'){
            sum++;
            maxi = max(sum, maxi);
        }
        else 
            sum--;
        if(sum<0) 
            sum = 0;
    }
    return maxi==INT_MIN?-1:maxi;
}

int main(){
	cout << maxSubstring("111");
	return 0;
}