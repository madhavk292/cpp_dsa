#include<bits/stdc++.h>
using namespace std;

int atoi(string str) {
    //Your code here
    int ans=0;
    int n = str.size();
    int i=0;
    int sign = 1;
    if(str[0] == '-'){
    	sign = -1;
    	i =1;
    }
    for(i; i<n; i++){
    	if(str[i])
        if((str[i] - '0')>=0 && (str[i] - '0')<=9)
        	ans = ans*10 + str[i]-'0';
        else
        	return -1;
    }
    return ans*sign;
}

int main(){
	string s;
	cin >> s;
	cout<<atoi(s);
	return 0;
}