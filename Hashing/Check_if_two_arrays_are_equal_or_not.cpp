// https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1
#include<bits/stdc++.h>
using namespace std;
#define ll long long

    //Function to check if two arrays are equal or not.
bool check(vector<ll> A, vector<ll> B, int N) {
    //code here
    unordered_map<ll, ll> mp;
    for(auto it: A){
        mp[it]++;
    }
    for(auto it: B){
    	if (mp.find(it) == mp.end())
    		return false;
    	mp[it]--;
    }
    unordered_map<ll, ll>:: iterator p;
	for (p = mp.begin(); p != mp.end(); p++){
		if(p->second != 0)
			return false;
	}
    return true;
}

int main(){
	vector<ll> A = {1,2,5,4,0};
	vector<ll> B = {2,4,5,0,1};
	cout << check(A, B, 5);
	return 0;
}