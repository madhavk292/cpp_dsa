#include<bits/stdc++.h>
using namespace std;

vector<string> AllPossibleStrings(string s){
    // Code here
    vector<string> ans;
    int n = s.size();
    for(int i=1; i<(1<<n); i++){
    	string str;
        for(int j=0; j<n; j++){
            if((1<<j)&i){
                str.push_back(s[j]);
            }
        }
        ans.push_back(str);
    }
    int siz = ans.size();
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
	vector<string> ans;
	ans = AllPossibleStrings("abc");
	for(auto it: ans)
		cout << it << endl;	
	return 0;
}