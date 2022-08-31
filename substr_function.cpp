//print all substring
#include <iostream>
using namespace std;
  
int main() {
	string str;
	cin >> str;
	int n = str.length();
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			for(int k=i; k<=j; k++) {
				cout << str[k];
			}
		cout << endl;
		}
	}
	return 0;
}

