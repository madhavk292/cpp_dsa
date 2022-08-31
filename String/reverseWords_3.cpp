// https://leetcode.com/problems/reverse-words-in-a-string-iii/
#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
	// string result;
	int l=0;

	while(l < s.length()){
		int r = l;
		while(r < s.length() && s[r] != ' '){
			r++;
		}
		reverse(s.begin()+l, s.begin()+r);
		l = r+1;
	}
	// reverse(s.begin(), s.end()); // Reverse Words in a String II
    return s;
}

int main(){
	cout << reverseWords("the sky is blue");
	return 0;
}