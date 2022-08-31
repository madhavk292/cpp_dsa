#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<bool> explored;
vector<vector<int> > graph;

void edge(int vertex_1, int vertex_2) {
	graph[vertex_1].push_back(vertex_2);
	graph[vertex_2].push_back(vertex_1);
}

void bfs(int u) {
	
	queue<int> q;

	q.push(u);
	explored[u] = true;

	while (!q.empty()) {

		int f = q.front();
		q.pop();

		cout << f << " ";

		for (auto i = graph[f].begin(); i != graph[f].end(); i++) {
			if (!explored[*i]) {
				q.push(*i);
				explored[*i] = true;
			}
		}
	}
}

int main() {
	int vertices, edges;
	cout<<"Enter the number of Vertices: ";
	cin>>vertices;
	cout<<"Enter the number of Edges: ";
	cin>>edges;

	explored.assign(vertices, false);
	graph.assign(vertices, vector<int>());
	cout<<"Enter edges[in the format(Vertex1 Vertex2)]:"<<endl;

	int vertex_1, vertex_2, start;
	for (int i = 0; i < edges; i++) {
		cin >> vertex_1 >> vertex_2;
		edge(vertex_1, vertex_2);
	}

	cout<<"Enter the source node: ";
	cin>>start;
	cout<<"BFS with source node "<<start<<":"<<endl;
	bfs(start);
	cout<<endl;
	return 0;
}