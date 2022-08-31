// https://leetcode.com/problems/reverse-words-in-a-string/
// IN O(1) extra space (In-place algorithm )

#include<bits/stdc++.h>
using namespace std;

void reverseWords(string s) {
    string result;
    int i=0;
    int start = 0;
    int end = 0;
    int n = s.size();
    
    while(i<n){
        while(i<n && s[i] == ' ') 
            i++;
        if(i>=n) 
            break;
        int j = i+1;
        while(j<n && s[j] != ' ') 
            j++;
        string sub = s.substr(i, j-i);
        for(int k=start; k<j-i; k++){
        	if(start != 0){
        		s[start] == ' ';
        	}
        	else
        		s[k] == s[i];
        }
        if(result.length() == 0)
            result = sub;
        else
            result = sub + " " + result;
        i = j+1;
    }
    cout << s;
}

int main(){
	reverseWords("  ASD LKJ");	
	return 0;
}