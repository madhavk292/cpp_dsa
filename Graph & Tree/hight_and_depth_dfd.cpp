#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
int depth[N], height[N];

void dfs(int vertex, int parent=0){
	// cout << vertex << endl;
	//Take action on vertex after entering the vertex
	// if(vis[vertex]) return;
	for(int child: g[vertex]){
		// Take action on child before entering the child node
		if(child == parent) continue;
		depth[child] = depth[vertex] + 1;
		// cout << child << endl;
		dfs(child, vertex);
		height[vertex] = max(height[vertex], height[child] + 1);
		// Take action on child after exiting child node

	}
	// Take action on vertex before exiting the vertex
}


int main(){
	int n;
	cin >> n;
	for(int i=0; i<n-1; i++){ // Tree has n-1 edges
		int v1, v2;
		cin >> v1 >> v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}
	cout << " Start";
	dfs(1);

	for(int i=0; i<=n; i++){
		cout << depth[i] << " " << height[i] << endl;
	}
	return 0;
}

// TC O(V + 2E) = O(V+E)