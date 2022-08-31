#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N]; // array of vector or vector of size N.
bool vis[N];

void dfs(int vertex){
	cout << vertex << endl;
	//Take action on vertex after entering the vertex
	// if(vis[vertex]) return;
	vis[vertex] = true;
	for(int child: g[vertex]){
		// Take action on child before entering the child node
		if(vis[child]) continue;
		// cout << child << endl;
		dfs(child);
		// Take action on child after exiting child node

	}
	// Take action on vertex before exiting the vertex
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
	for(int i=0; i<5; i++){
		for(auto it: g[i])
			cout << it;
		cout << endl;
	}
	cout << " Start";
	dfs(0);
	return 0;
}

// TC O(V + 2E) = O(V+E)