// Adjacency List 
#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;

vector<int> graph[N]; // array of vectors
int main(){
	int n, m; // there n is # of vertices ans m is # of edges
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int v1,v2;
		cin >> v1 >>v2;
		
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);		
	}
	return 0;
}

// for waighted graph
vector<pair<int, int>> graph[N]; // array of vectors
int main(){
	int n, m; // there n is # of vertices ans m is # of edges
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int v1,v2, wt;
		cin >> v1 >>v2 >> wt;
		
		graph[v1].push_back({v2, wt});
		graph[v2].push_back({v1, wt});		
	}
	return 0;
}

// if input is vector of vector
vector<vector<int>> edges;

vector<int> adj[n];
for(auto it: edges){
	vector<int> data = it;
	int a = data[0];
	int b = data[1];
	adj[a].push_back(b);
}


//space complexity - O(N + E) where N is number of vertices ans E is edges
// N can be 10^5 and E should be less then 10^7

// cinnection and wt value in O(N)
	// for(int child: graph[i]){
	// 	if(child == j)
	// 		connected
	// }
// wt => 
// cinnection and wt value in O(N)
	// for(pair<int, int> child: graph[i]){
	// 	if(child.first == j)
	// 		connected
	//      child.secound
	// }