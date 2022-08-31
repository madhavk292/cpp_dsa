
// C++ program to find Intersection of
// two arrays
#include<bits/stdc++.h>

using namespace std;

int doUnion(int a[], int n, int b[], int m){
	int count = 0;
	unordered_set <int> arraySet;
	for(int i=0; i<n; i++){
		arraySet.insert(a[i]);
	}
	for(int j=0; j<m; j++){
		if(arraySet.find(b[j]) != arraySet.end()){
			count++;
			arraySet.erase(b[j]);
		}
	}
	return count;
}
int main(){
	int arr1[] = {2, 9, 7, 8};
	int arr2[] = {2, 2, 9, 9, 10, 11};

	cout<<doUnion(arr1, 4, arr2, 6);
	return 0;
}

//time complexity - O(m+n)
//space complexity - O(m,n)