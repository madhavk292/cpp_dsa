// https://leetcode.com/problems/longest-substring-without-repeating-characters/
#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
	unordered_set<char> char_set; // we can use both set and unordered set
	int maxi=0;
	int start=0, end=0;

	while(end < s.length()){
		auto it = char_set.find(s[end]);
		if(it == char_set.end()){
			maxi = max(maxi, end-start+1);
			char_set.insert(s[end]);
			end++;
		}
		else{
			char_set.erase(s[start]);
			start++;
		}
		unordered_set<char>::iterator itr;
	    for (itr = char_set.begin(); itr != char_set.end(); itr++) {
        	cout << *itr << " ";
    	}
    	cout << endl;
	}

	return maxi;
}

int main(){
	string str;
	cin >> str;
	cout << lengthOfLongestSubstring(str);
	return 0;
}


// TC - O(2n)
// SC - O(n)