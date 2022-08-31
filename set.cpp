#include<iostream>
// #include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
	int arr[] = { 12, 3, 5, 7, 19 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 4;
	
	set<int> s(arr, arr + n);
	for (auto it = s.begin(); it !=
                               s.end(); ++it)
        cout << ' ' << *it;
	return 0;
}