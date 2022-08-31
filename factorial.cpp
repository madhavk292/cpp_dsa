// Hello World!
#include<iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--){
	int N;
	cin >> N;
	long long result=9;
	for(int i=1; i<N; i++){
		result *= 9;
		}
	cout << result << endl; 
	}
	return 0;
}
