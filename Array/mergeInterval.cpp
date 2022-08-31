// https://leetcode.com/problems/merge-intervals/
// https://practice.geeksforgeeks.org/problems/8a644e94faaa94968d8665ba9e0a80d1ae3e0a2d/1

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;
    if(intervals.size()==0){
    	return ans;
    }
    sort(intervals.begin(), intervals.end());
    vector<int> temp = intervals[0];
    for(auto it: intervals){
    	if(it[0] <= temp[1])
    		temp[1] = max(it[1], temp[1]);
    	else{
    		ans.push_back(temp);
    		temp = it;
    	}
    }
    ans.push_back(temp);
    return ans;
}

int main(){
	vector<vector<int>> intervals;
	intervals = {{1, 3}, 
  		         {2, 6}, 
  		         {8, 10},
  		  		 {15, 18}};
  	vector<vector<int>> ans;	  		 
  	ans = overlappedInterval(intervals);
  	for (auto i:ans){
       cout << "("<< i[0] << " "<< i[1] << ") ";
    }
	return 0;
}

// Time Complexity: O(NlogN) + O(N). O(NlogN) for sorting and O(N) for traversing through the array.

// Space Complexity: O(N) to return the answer of the merged intervals.