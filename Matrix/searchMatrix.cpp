// https://leetcode.com/problems/search-a-2d-matrix/
#include<bits/stdc++.h>
using namespace std;


bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int lo = 0;
    if(!matrix.size()) return false;
    int hi = (matrix.size() * matrix[0].size()) - 1;
    
    while(lo <= hi) {
        int mid = (lo + (hi - lo) / 2);
        if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target) {
            return true;
        }
        if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    return false;
}


/* TC = mlogn
bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int m = matrix.size();
	int n = matrix[0].size();
	int i, j;
	cout << matrix[1][0] << " " << matrix[1][n-1] << endl;
	if(target < matrix[0][0] || target > matrix[m-1][n-1]){
		return false;
	}
	for(int k=1; k<m; k++){
		cout<< k<< endl;
		if(matrix[k-1][0] <= target && matrix[k][0]>target){
			i = k-1;
			break;
		}
		else if(matrix[m-1][0] <= target && matrix[m-1][n-1]>=target){
			i = m-1;
			break;
		}
	}
	return (binary_search(matrix[i].begin(), matrix[i].end(), target));
}

/* TC = O(mn)
bool searchMatrix(vector<vector<int>>& matrix, int target) {
	for(auto v : matrix){
		for(auto i : v){
			if(i==target)
				return true;
		}
		// cout << endl;
	}
	return false;        
}
*/

int main(){
	int n, m, target;
	cin>> m >> n >> target;
  	vector<vector<int>> matrix(m, vector<int> (n, 0));
  	for(auto &v : matrix){
		for(auto &i : v)
			cin>>i;
	}
	bool ans = searchMatrix(matrix, target);
	if(ans)
		cout<<"true"<<endl;
	else
		cout << "false"<<endl;
	// for(auto &v : matrix){
	// 	for(auto &i : v){
	// 		cout << i <<" ";
	// 	}
	// 	cout << endl;
	// }	
	return 0;
}