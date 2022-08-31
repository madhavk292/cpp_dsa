// https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
#include<bits/stdc++.h>
using namespace std;

int longestKSubstr(string s, int k) {
// your code here
	map<char, int> mp;
	int start=0, end=0;
	int res = -1;
	
	while(end < s.length()){
		mp[s[end]]++;
		if(mp.size()<k){
			end++;
			continue;
		}
		else if(mp.size() == k){
			res = max(res, end-start+1);
			end++;
		}
		else if(mp.size() > k){
			while(mp.size() > k){
				mp[s[start]]--;
				if(mp[s[start]] == 0){
					mp.erase(s[start]);
				}
				start++;
			}
			end++;
		}
	}
	return res;
}


int main(){
	string str;
	cin >> str;
	int k;
	cin >> k;
	cout << longestKSubstr(str, k);
	return 0;
}
