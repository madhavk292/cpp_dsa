#include <bits/stdc++.h>
using namespace std;

int main(){
	array<int, 3> arr = {1, 4, 5};
		for(auto it= arr.rbegin(); it!=arr.rend();it++) {
		cout << *it << " " << &it; 
	}
}
