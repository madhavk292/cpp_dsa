//diameter of a tree(generic tree) it could be binary or any other tree.
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
int depth[N];

void dfs(int v, int par = -1){
	for(int child: g[v]){
		if(child == par) continue;
		depth[child] = depth[v] +1;
		dfs(child, v);
	}
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
	dfs(1);

	int max_depth = -1;
	int max_depth_node;
	for(int i=1; i<=n; i++){
		if(max_depth<depth[i]){
			max_depth = depth[i];
			max_depth_node = i;
		}
		depth[i] = 0;
	}
	dfs(max_depth_node);
	max_depth = -1;
	for(int i=1; i<=n; i++){
		if(max_depth<depth[i]){
			max_depth = depth[i];
		}
	}
	cout << max_depth<< endl;
	return 0;
}
