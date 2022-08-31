#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
int vis[N];
int level[N];

void bfs(int source){
	queue<int> q;
	q.push(source);
	vis[source] = 1;

	while(!q.empty()){
		int cur_v = q.front();
		q.pop();
		cout << cur_v << endl;
		for(int child : g[cur_v]){
			if(!vis[child]){
				q.push(child);
				vis[child] = 1;
				level[child] = level[cur_v] + 1;
			}
		}
	}

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
	// for(int i=0; i<5; i++){
	// 	for(auto it: g[i])
	// 		cout << it;
	// 	cout << endl;
	// }
	cout << " Start";

	bfs(0);
	for(int i=0; i<v; ++i){
		cout << i << ":" << level[i] << endl;
	}
	return 0;
}

// TC O(V + 2E) = O(V+E)
// while loop v times and for loop 2E times