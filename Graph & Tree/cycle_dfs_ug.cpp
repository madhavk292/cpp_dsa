// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];

bool dfs(int vertex, int parent){
	//Take action on vertex after entering the vertex
	// if(vis[vertex]) return;
	vis[vertex] = true;
	bool isLoopExists = false;
	for(int child: g[vertex]){
		// Take action on child before entering the child node
		if(vis[child] && child == parent) continue;
		if(vis[child]) return true;
		// cout << child << endl;
		isLoopExists |= dfs(child, vertex);
		// Take action on child after exiting child node

	}
	// Take action on vertex before exiting the vertex
	return isLoopExists;
}


int main(){
	int v, e;
	cin >> v >> e;
	for(int i=0; i<e; i++){
		int v1, v2;
		cin >> v1 >> v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}
	bool isLoopExists = false;
	for(int i=1; i <= v; i++){
		if(vis[i]) continue;
		if(dfs(i, 0)){
			isLoopExists = true;
			break;
		}
	}
	cout << isLoopExists;
	return 0;
}
