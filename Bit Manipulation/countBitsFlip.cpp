// https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1

#include<bits/stdc++.h>
using namespace std;

int countBitsFlip(int a, int b){
    // Your logic here
    int n = a^b;
	int ans = 0;
    while(n!=0){
    	n = n & (n-1);
    	ans++;
    }
    return ans; 
}

int main(){
	int a = 20, b = 25;
	cout << countBitsFlip(a, b);	
	return 0;
}


