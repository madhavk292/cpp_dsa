#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int leftBoundry = 0;
    int rightBoundry = matrix[0].size();
    int topBoundry = 0;
    int bottomBoundry = matrix.size();

    while(leftBoundry<rightBoundry && topBoundry<bottomBoundry){
    	for(int i=leftBoundry; i<rightBoundry; i++){
    		ans.push_back(matrix[topBoundry][i]);
    		cout<< "first loop: " << matrix[topBoundry][i] << endl;
    	}
    	topBoundry++;
    	for(int j=topBoundry; j<bottomBoundry; j++ ){
    		ans.push_back(matrix[j][rightBoundry-1]);
    		cout<< "second loop: " << matrix[j][rightBoundry-1] << endl;

    	}
    	rightBoundry--;
    	
    	if(!(leftBoundry<rightBoundry && topBoundry<bottomBoundry))
    		break;

    	for(int k=rightBoundry-1; k>=leftBoundry; k--){
    		ans.push_back(matrix[bottomBoundry-1][k]);
    		cout<< "third loop: " << matrix[bottomBoundry-1][k] << endl;
    	}
    	bottomBoundry--;
    	for(int l=bottomBoundry-1; l>=topBoundry; l--){
    		ans.push_back(matrix[l][leftBoundry]);
    		cout<< "fourth loop: " << matrix[l][leftBoundry] << endl;
    	}
    	leftBoundry++;
    }
    return ans;
}

int main(){
	// vector<vector<int>> matrix = {{1,2,3,10}, {4,5,6,11}, 
	// 								{7,8,9,12}, {13,14,15,16}};	
	vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};	
	vector<int> ans = spiralOrder(matrix);
	for(auto ii: ans){
		cout << ii <<" ";
	}
	cout << endl;
	return 0;
}

// TC: O(m*n) SC: O(1)