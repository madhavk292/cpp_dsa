#include<bits/stdc++.h>
using namespace std;

void convertBase(string s){
    // 128 bit integer to store
    // the decimal conversion
    // __int128 decimal = 0;
    int64_t decimal = 0;

    for(int i=0; i<s.length(); i++){
    	decimal = decimal * 2 + (s[i] - '0');
    }
    cout << decimal << endl;

    // Stores the base 6 int
    vector<int> ans;
 
    // Decimal to base 6
    while (decimal > 0) {
        ans.push_back(decimal % 6);
        decimal = decimal / 6;
    }
 
    // Print Answer
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i];
    }
}

int main(){
	convertBase("100111");
	return 0;
}