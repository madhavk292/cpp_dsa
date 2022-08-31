// https://www.codingninjas.com/codestudio/problems/1062712
#include<bits/stdc++.h>
// #include<iostream.h>
using namespace std;

int maximumActivities(vector<int> &start, vector<int> &finish){
	int n = start.size();
	vector<pair<int, int>> activity(n);

	for(int i=0; i<n; i++){
		activity[i].first = finish[i];
		activity[i].second = start[i];
	}

	sort(activity.begin(), activity.end());
	
	int maxActivity = 1;
	int currentTime = activity[0].first;

	for(int i=1; i<n; i++){
        if (activity[i].second >= currentTime) {
            maxActivity++;
            currentTime = activity[i].first;
        }
	}
	return maxActivity;
}

int main(){
	int n;
	cin >> n;
	vector<int> start(n);
	vector<int> finish(n);
	for(auto &i: start){
		cin >> i;
	}
	for(auto &ii: finish){
		cin >> ii;
	}
	cout << maximumActivities(start, finish);
	return 0;
}