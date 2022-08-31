// Print sum of all the digit present in n
#include<iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sum = 0;
	while(n>0){
		sum += n % 10;
		n = n / 10; 
	}
	cout << sum << endl;
	return 0;	
}
