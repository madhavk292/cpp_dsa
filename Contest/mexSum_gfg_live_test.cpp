#include<bits/stdc++.h>
using namespace std;

long long mexSum(int N, string S) {
    // code here
    long long sum = 0;
    char zero = '0';
    char one = '1';
    // First loop for starting index
    for (int i = 0; i < N; i++) {
        string subStr;
        // Second loop is generating sub-string
        for (int j = i; j < N; j++) {
            subStr += S[j];
            cout << subStr << endl;
            size_t found_0 = subStr.find(zero);
    		size_t found_1 = subStr.find(one);
	    	if (found_0 != string::npos){
	    		
	    		if (found_1 != string::npos){
	    			sum += 2;
	    			continue;
	    		}

	    		else{
	    			sum += 1;
	    			continue;
	    		}
	    	}
	    	// if (found_1 != string::npos){
	    	// 	if (found_0 != string::npos)
	    	// 		sum += 2;
	    	// }
            
            // cout << " "<< sum << " ";
        }
    }
    return sum;
}
int main(){
	string str = "101";
	cout << mexSum(3, str);
	return 0;
}