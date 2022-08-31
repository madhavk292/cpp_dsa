// https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1
#include<bits/stdc++.h>
using namespace std;

    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.

int largestPowerOf2InRange(int n){ //function return the largest power of 2 in range n
	int x =0;
	while((1<<x) <=n){
		x++;
	}
	return x-1;
}

int countSetBits(int n){
	if(n==0) return 0;
	int x = largestPowerOf2InRange(n);
	// int ans=0;
	int bitTill2x = x * (1 << (x-1)); // 2^(x-1)*x
	int msd = n - (1 << x) + 1; //msd of remaining
	return msd + bitTill2x + countSetBits(msd-1); // call for remaining after removing msd
}

int main(){
	cout << countSetBits(4);
	return 0;
}