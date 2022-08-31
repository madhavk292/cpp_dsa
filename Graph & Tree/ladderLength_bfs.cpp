// https://leetcode.com/problems/word-ladder/
#include<bits/stdc++.h>
using namespace std;

int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
    unordered_set<string> myset;

    for(auto word: wordList){
    	myset.insert(word);
    }
    if(myset.find(endWord) == myset.end())
    	return 0; // if endWord is not present in wordList return 0;

    // BFS
    queue<string> q;
    q.push(beginWord);
    int depth = 0;

    while(!q.empty()){
    	depth += 1;
    	int levelSize = q.size(); // no of element at a level
    	while(levelSize--){
    		string curr = q.front();
    		q.pop();
    		// check all possiblel 1 depth words
    		for(int i=0; i<curr.length(); ++i){
    			string temp = curr;
    			for(char c='a'; c<='z'; ++c){ // try all possible char
    				temp[i] = c;
    				if(curr.compare(temp) == 0)
    					continue; // skip the same word
    				if(temp.compare(endWord) == 0)
    					return depth+1; // endword found
    				if(myset.find(temp) != myset.end()){
    					q.push(temp);
    					myset.erase(temp);
    				}
    			}
    		}
    	}

    }
    return -1;
}

int main(){
	string a = "hit", b = "cog";
	vector<string> wordList = {"hot","dot","dog","lot","log","cog"};
	cout << ladderLength(a, b, wordList);
	return 0;
}