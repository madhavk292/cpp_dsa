#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<bool> explored;
vector<vector<int>> graph;

void edge(int vertex_1, int vertex_2)
{
	graph[vertex_1].push_back(vertex_2);
	graph[vertex_2].push_back(vertex_1);
}

void dfs(int n)
{
	stack<int> s;
	int val;
	
	s.push(n);
	explored[n] = true;

	while(!s.empty()) {

		val = s.top();s.pop();
		cout<<val<<" ";
		for (auto it = graph[val].begin(); it != graph[val].end(); it++) {
			if(!explored[*it]) {
				s.push(*it);
				explored[*it] = true;
			}
		}
	}
}
int main()
{
	int vertices, edges;
	cout<<"Enter the number of Vertices: ";
	cin>>vertices;
	cout<<"Enter the number of Edges: ";
	cin>>edges;

	explored.assign(vertices, false);
	graph.assign(vertices, vector<int>());
	cout<<"Enter edges[in the format(Vertex1 Vertex2)]:"<<endl;
	
	int vertex_1, vertex_2, start;
	for (int i = 1; i <= edges; i++) {
		cin>>vertex_1>>vertex_2;
		edge(vertex_1, vertex_2);
	}

	cout<<"Enter the source node: ";
	cin>>start;
	cout<<"DFS with source node "<<start<<":"<<endl;
	dfs(start);
	cout<<endl;
	return 0;
}