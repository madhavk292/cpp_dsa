// Prime Number
#include<iostream>
using namespace std;

int Prime(int n) {
	for(int i=2; i<n/2; i++){
		if (n%i==0){
			cout << "no" << endl;
			return 0;
		}
	}
	cout << "yes" << endl;
	return 0;
}
int main() {
	int T;
	cin >> T;
	int N[T];
	for(int x=0; x<T; x++) {
		cin >> N[x];
	}
	for(int x=0; x<T; x++) {
		 Prime(N[x]);
	} 
  return 0;
}
