//Find k’th character of decrypted string
//https://leetcode.com/problems/decoded-string-at-index/
#include<bits/stdc++.h>
using namespace std;

char encodedChar(string str, long long k){
	
	string expand = "";
	string temp;
	long long freq = 0;

	for(long long i=0; str[i]!='\0';){
		temp = "";
		freq = 0;

		while(str[i] >= 'a' && str[i] <= 'z'){
			temp.push_back(str[i]);
			i++;
		}

		while(str[i] >= '1' && str[i] <= '9'){
			freq = freq*10 + str[i] - '0';
			i++;
		}

		for(long long j=1; j<=freq; j++)
			expand.append(temp);
	}

	if(freq == 0)
		expand.append(temp);

	// cout<<expand <<endl;
	return expand[k-1];
}



int main(){
	string str;
	cin >> str;
	long long k;
	cin >> k;
	cout << encodedChar(str, k) << endl;	
	return 0;
}