// Hello World!
#include<iostream>
using namespace std;

bool palindrome(string str) {
	bool pali = true;
	int len = str.length();
	for(int i=0; i<len-i-1; i++) {
		if (str[i] != str[len-i-1]) {
			pali = false;
			return pali;
		}
	}
	return pali;
}
int main() {
	string str;
	cin >> str;
	if(palindrome(str))
		cout << "Palindrom" << endl;
	else
		cout << "Not Palindrom" << endl;
	return 0;
}
