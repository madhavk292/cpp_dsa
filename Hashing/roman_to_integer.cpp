#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    map<char, int> roman;
    roman.insert(make_pair('I', 1));
    roman.insert(make_pair('V', 5));
    roman.insert(make_pair('X', 10));
    roman.insert(make_pair('L', 50));
    roman.insert(make_pair('C', 100));
    roman.insert(make_pair('D', 500));
    roman.insert(make_pair('M', 1000));
    int result = roman[s[s.length()-1]];
    for(int i = s.length()-2; i>=0; i--){
        if(roman[s[i]] < roman[s[i+1]])
            result -= roman[s[i]];
        else
            result += roman[s[i]];
    }
    return result;
}
int main(){
	string s;
	cin >> s;
	// cout << "legth" << s.length() << endl;
	cout<<romanToInt(s);
	return 0;
}