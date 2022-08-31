#include<bits/stdc++.h>
using namespace std;

void reverse(string &s){
	int n = s.size();
	for(int i=0, j=n-1; i<j; i++,j--){
		swap(s[i], s[j]);
	}
	cout << s << endl;
}

int main(){
    string str = "Madhav";
    reverse(str);
    cout << str << endl;	
	return 0;
}