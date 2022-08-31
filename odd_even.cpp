#include<iostream>

using namespace std;

int main(){
int sum=0, x, n;
cin >> n;
if(n % 2 == 1){  //if odd print factorial value of n
	sum = 1;
	x = 1;
	while(x <= n){
		sum *= x;
		x++;
	}
	cout << sum << endl;   //https://www.geeksforgeeks.org/count-sum-of-digits-in-numbers-from-1-to-n/
}
//if (n%2 == 0){
else{ // if even print sum of whole number upto and including n
	for(x=0; x<=n; x++){
		sum += x;
		}
	cout << sum << endl;
	}
}
