#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int res = 0;
    int pop;
    
    while(x != 0){
        pop = x%10;
        cout << "pop: "<<pop << endl;
        x /= 10;
        cout << x << endl;
        
        res = (res*10) + pop;
        cout << res << endl;
    }
    return res;
}

int main(){
	cout << reverse(-123);	
	return 0;
}