#include<bits/stdc++.h>
using namespace std;

// Leetcode
string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 0) return "";
  	string prefix = strs[0];
  	int count =0;
  	for(int i=0; i<prefix.length(); i++){
  		for(int j=1; j<strs.size(); j++){
  			if(strs[j][i] != prefix[i])
  				return prefix.substr(0, count);
  		}
  		count ++;
  	}
    return prefix;
}

int main(){
	string arr[] = {"flower","flow","flight"};
	cout << longestCommonPrefix(arr);
	return 0;
}