#include <bits/stdc++.h> 
using namespace std;

class Edge {
    public:
        int src, dest;
};

class Graph {
    public:
        int V, E;
    Edge * edge;
};

Graph * createGraph(int V, int E) {
    Graph * graph = new Graph();
    graph -> V = V;
    graph -> E = E;

    graph -> edge = new Edge[graph -> E * sizeof(Edge)];

    return graph;
}

//Function to find subset of element i 
int find(int parent[], int i)
{
    if (parent[i] == -1) {
        return i;
    }
    return find(parent, parent[i]);
}
//Function to do union of 2 subsets 
int Union(int parent[], int x, int y)
{
    parent[x] = y;
    return 0;
}
//Check if graph contain cycle or not 
int isCycle(Graph *graph)
{
    int * parent = new int[graph -> V * sizeof(int)];
    memset(parent, -1, sizeof(int) * graph -> V);
    for (int i = 0; i < graph -> E; ++i) {
        int x = find(parent, graph -> edge[i].src);
        int y = find(parent, graph -> edge[i].dest);

        if (x == y) {
            return 1;
        }
        Union(parent, x, y);
    }
    return 0;
}
int main() {
    int V = 3, E = 3;
    Graph * graph = createGraph(V, E);
    //Edge 0-1
    graph -> edge[0].src = 0;
    graph -> edge[0].dest = 1;

    //Edge 1-2
    graph -> edge[1].src = 1;
    graph -> edge[1].dest = 2;

    //Edge 0-2
    graph -> edge[2].src = 0;
    graph -> edge[2].dest = 2;

    if (isCycle(graph)) {
        cout << "Graph contains cycle" << endl;
    } else {
        cout << "Graph doesn't contain cycle" << endl;
    }

    return 0;
}