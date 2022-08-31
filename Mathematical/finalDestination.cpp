// https://practice.geeksforgeeks.org/problems/final-destination4628/1
#include<bits/stdc++.h>
using namespace std;

int canReach(long long a, long long b, long long x) {
    // code here
    if((abs(a) + abs(b)) > x){
    	return 0;
    }
    else if (abs(a) + abs(b) == x){
    	return 1;
    }
    else
    	return ((x - abs(a) + abs(b)) % 2) ? 0 : 1;
}

int main(){
	cout << canReach(5, 5, 12);
	return 0;
}