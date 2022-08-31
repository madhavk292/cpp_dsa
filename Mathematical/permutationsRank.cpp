// https://youtu.be/uUN8fVPrJn0
// Sorted Permutation Rank
#include<bits/stdc++.h>
using namespace std;

int sortedPermutationRank(string str){
	int n = str.length();
	long fact[26];
	// ASCII 8 bits, 256 characters
	int arr[256] = {};  // initalize the array with 0
	fact[0] = 1;
	fact[1] = 1;
	for(int i=2; i<26; i++){ // populate the factorial array
		fact[i] = i * fact[i-1];
	}
	for(int i=0; i<n; i++){ // populate the ASCII index
		arr[str[i]]++;
	}
	int numberOfLetterSmaller;
	int output = 0;
	for(int i=0; i<n; i++){
		numberOfLetterSmaller = 0;
		for(int j=0; j<256; j++){
			if(j == str[i]){
				break;
			}
			if(arr[j]){
				numberOfLetterSmaller++;
			}
		}
		arr[str[i]] = 0;
		output += numberOfLetterSmaller*fact[n-1-i];
	}
	return output+1;
}

int main(){
	cout << sortedPermutationRank("string");
	return 0;
}