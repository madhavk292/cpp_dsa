// Number of K-length paths in a Tree - Flipkart OA 2022
// given k and numder of edges in the pairs
#include <bits/stdc++.h>
using namespace std;

int mx_depth = 0, ans = 0;
int N, K;
vector<int> freq;
vector<vector<int> > g;

// This dfs is responsible for calculating ans
// and updating freq vector
void dfs(int node, int par, int depth,
		bool contri)
{
	if (depth > K)
		return;
	mx_depth = max(mx_depth, depth);

	if (contri) {
		ans += freq[K - depth];
	}
	else {
		freq[depth]++;
	}

	for (auto nebr : g[node]) {
		if (nebr != par) {
			dfs(nebr, node, depth + 1,
				contri);
		}
	}
}

// Function to calculate K length paths
// originating from node
void paths_originating_from(int node,
							int par)
{
	mx_depth = 0;
	freq[0] = 1;

	// For every not-removed nebr,
	// calculate its contribution,
	// then update freq vector for it
	for (auto nebr : g[node]) {
		if (nebr != par) {
			dfs(nebr, node, 1, true);
			dfs(nebr, node, 1, false);
		}
	}

	// Re-initialize freq vector
	for (int i = 0; i <= mx_depth; ++i) {
		freq[i] = 0;
	}

	// Repeat the same for children
	for (auto nebr : g[node]) {
		if (nebr != par) {
			paths_originating_from(nebr,
								node);
		}
	}
}

// Utility method to add edges to tree
void edge(int a, int b)
{
	a--;
	b--;
	g[a].push_back(b);
	g[b].push_back(a);
}

// Driver code
int main()
{
	N = 5, K = 2;
	freq = vector<int>(N);
	g = vector<vector<int> >(N);

	edge(1, 2);
	edge(1, 5);
	edge(2, 3);
	edge(2, 4);
	
	paths_originating_from(0, -1);
	cout << ans << endl;
}
