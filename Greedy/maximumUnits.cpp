// https://leetcode.com/problems/maximum-units-on-a-truck/
#include<bits/stdc++.h>
using namespace std;

int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    
    priority_queue<pair<int, int>> pq;
    int count = 0;

    for(vector<int> x: boxTypes){
    	pq.push({x[1], x[0]});
    }

    int units = 0;
    while(!pq.empty() && count < truckSize){
    	pair<int, int> pr = pq.top();
    	if(count+pq.top().second <= truckSize){
    		count += pq.top().second;
    		units += pq.top().second * pq.top().first;
    		pq.pop();
    	}
    	else{
    		int remain = truckSize - count;
    		count += remain;
    		units += remain * pq.top().first;
    		pq.pop();
    	}
    }


    return units;
}

int main(){
	vector<vector<int>> boxTypes = {{1,3},{2,2},{3,1}};
	int truckSize = 4;
	cout << maximumUnits(boxTypes, truckSize);
	return 0;
}