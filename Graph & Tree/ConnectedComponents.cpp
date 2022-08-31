// https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];

vector<vector<int>> cc;
vector<int> current_cc;

void dfs(int vertex){
	//Take action on vertex after entering the vertex
	// if(vis[vertex]) return;
	vis[vertex] = true;
	current_cc.push_back(vertex);
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
	int component_count = 0;
	for(int i=1; i <= v; i++){
		if(vis[i]) continue;
		current_cc.clear();
		dfs(i);
		cc.push_back(current_cc);
		component_count++;
	}
	for(auto ii: cc){
		for(auto i: ii){
			cout << i << " ";
		}
		cout<< endl;
	}
	cout << cc.size();
	return 0;
}

// O(V+E)