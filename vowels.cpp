// count the number of vowels in string
#include<iostream>
using namespace std;

int vowels(string s) {
	int i = 0;
	int count = 0;
	while (s[i]!='\0') {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
			count++;
		}
		i++;	 
	}
	return count;
}

int main()
{
	string s;
	cin >> s;
	cout << vowels(s) << endl;
  	return 0;
}
