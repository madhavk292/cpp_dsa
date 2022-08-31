#include<bits/stdc++.h>
using namespace std;

bool ispar(string s){
        stack<char> container;
        for (char c : s) {
            if (container.empty()) {
                container.push(c);
            } else {
                if (c == '(' || c == '{' || c == '[') {
                    container.push(c);
                } else {
                    char v = container.top();
                    if ( (c == ')' && v == '(') || (c == '}' && v == '{') || (c == ']' && v == '[')) {
                        container.pop();
                    } else {
                        return false;
                    }
                }
            }
        }
        return container.empty();}

int main(){
	string s = "{([])}";
	cout << ispar(s);
	return 0;
}