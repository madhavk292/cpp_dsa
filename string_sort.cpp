#include<iostream>
#include<string>
#include<algorithm>
// #include<bits/stdc++.h>

using namespace std;

int strsort(string &s){
	sort(s.begin(), s.end());
	cout << s << endl;
	return 0;
}

int main(){
	string s;
	cin >> s;
	cout << s << endl;
	strsort(s);
	// sort(s.begin(), s.end());
	// cout << s << endl;
	return 0;
}