#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<int>> matrix;
	matrix = {{0, 1, 2, 0}, 
  		      {3, 4, 5, 2}, 
  		      {1, 3, 0, 5}};
  	cout << matrix.size() << endl;
  	cout << matrix[0].size() << endl;
	
  	for (int i = 0; i < matrix.size(); i++) {
    	for (int j = 0; j < matrix[0].size(); j++) {
      	cout << matrix[i][j] << " ";
    	}
    	cout << "\n";
  	}
  	cout << endl;

  	for(auto v : matrix){
		for(auto i : v)
			cout << i << " ";
		cout << endl;
	}

//input 2D vector
	int n;
	cin>> n;
  	vector<vector<int>> matrix(n, vector<int> (n, 0));
  	for(auto &v : matrix){
		for(auto &i : v)
			cin>>i;
	}
	// loop through 
	for (auto i:ans){
       cout << "("<< i[0] << " "<< i[1] << ") ";
   }
   // loop throug 2D vector 
   for (int i=0; i<intervals.size(); i++){
    	cout<<intervals[i][0]<<" "<<intervals[i][1];
    }
	return 0;
}