// Adjacency Matrix 
#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
int graph[N][N]; //global varible will initialise to 0
//Global variables are automatically initialized to 0 at the time of declaration.


int main(){
	int n, m; // there n is # of vertices ans m is # of edges
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int v1,v2;
		cin >> v1 >>v2;
		graph[v1][v2] = 1;
		graph[v2][v1] = 1;		
	}
	return 0;
}

// for waighted graph
int main(){
	int n, m; // there n is # of vertices ans m is # of edges
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int v1,v2, wt;
		cin >> v1 >>v2;
		graph[v1][v2] = wt;
		graph[v2][v1] = wt;		
	}
	return 0;
}

// space complexity is high in Adjacency Matrix representation
// space complexity - O(N^2) where N is number of vertices
// maximum continuous memory limit is 10^7 or 10^8
// so you can not make array greater then 10^7 or 10^8
// cinnection ans wt value in O(1)
	// if(graph[i][j] == 1)
	// 	connected
// wt => graph[i][j]