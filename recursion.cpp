#include "bits/stdc++.h"
using namespace std;

int sum_digits(int n){
	if (n == 0){
		return 0;
	}
	return n + sum_n(n-1);
}

int main(){
	cout << sum_digits(5434);
	return 0;
}