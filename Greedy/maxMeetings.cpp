// https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1
#include<bits/stdc++.h>
using namespace std;

void maxMeetings(int s[], int f[], int n){
	pair<int, int> a[n+1];
	for(int i=0; i<n; i++){
		a[i].first = f[i];
		a[i].second = i;
	}

	// Sorting of meeting according to their finish time.
    sort(a, a + n);

    int time_limit = a[0].first;

    vector<int> m;
    m.push_back(a[0].second+1);

    for(int i=1; i<n; i++){
    	if(s[a[i].second]> time_limit){
    		m.push_back(a[i].second+1);

    		time_limit = a[i].first;
    	}
    }
    // Print final selected meetings.
    for (int i = 0; i < m.size(); i++) {
        cout << m[i] << " ";
    }
}

int main(){
    // Starting time
    int s[] = { 1, 3, 0, 5, 8, 5 };
 
    // Finish time
    int f[] = { 2, 4, 6, 7, 9, 9 };
 
    // Number of meetings.
    int n = sizeof(s) / sizeof(s[0]);
 
    // Function call
    maxMeetings(s, f, n);
 
    return 0;
}