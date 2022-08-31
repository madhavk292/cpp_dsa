// https://practice.geeksforgeeks.org/problems/knight-walk4521/1
// https://practice.geeksforgeeks.org/problems/steps-by-knight5927/1
#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9+10;

vector<pair<int, int>> movements{
	{-1, 2}, {1, 2},
	{-1, -2}, {1, -2},
	{2, 1}, {2, -1},
	{-2, 1}, {-2, -1}
};

bool isValid(int x, int y, int n){
	return x>=0 && y>=0 && x<n && y<n;
}

int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
	int lev[N][N];
	memset(lev, 0, sizeof(lev));

	int sourceX = KnightPos[0];
	int sourceY = KnightPos[1];
	int destX = TargetPos[0];
	int destY = TargetPos[1];

	if(sourceX == destX && sourceY == destY)
		return 0;

	queue<pair<int, int>> q;
	q.push({sourceX-1, sourceY-1});
	lev[sourceX][sourceY] = 0;

	while(!q.empty()){
		pair<int, int> v = q.front();
		int x=v.first, y=v.second;
		q.pop();

		for(auto movement: movements){
			int childX = movement.first + x;
			int childY = movement.second + y;
			if(!isValid(childX, childY, N)) continue;
			if(lev[childX][childY] == 0){
				q.push({childX, childY});
				lev[childX][childY] = lev[x][y] + 1;
			}
		}
	}
	return lev[destX-1][destY-1];
}

int main(){
	int n;
	cin >> n;
	vector<int> KnightPos(2), TargetPos(2);
	cin >> KnightPos[0] >> KnightPos[1];
	cin >> TargetPos[0] >> TargetPos[1];
	cout << minStepToReachTarget(KnightPos, TargetPos, n) << endl;
	return 0;
}