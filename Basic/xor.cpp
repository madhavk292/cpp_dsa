// basic of xor operation 
#include<bits/stdc++.h>
using namespace std;

int getXOR(int x, int y) {
  int ans = 0;
  for (int i = 0; i <= 31; i++) {
    if (((1 LL << i) & x) != ((1 LL << i) & y)) {
      ans |= (1 LL << i);
    }
  }
  return ans;
}

int main(){
	// a = 5(00000101), b = 9(00001001)
    int a = 5, b = 9;
    int ans = getXOR(a, b);
    cout << "ans: "<< ans;
    // The result is 00001100
    cout << "a ^ b = " << (a ^ b) << endl;
	return 0;
}