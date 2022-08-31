#include <iostream>
#include <vector>
#define MAX 99999
using namespace std;

int interval(int i, int j, vector<vector<int>>& p) {
   return abs(p[i][0] - p[j][0]) + abs(p[i][1] - p[j][1]);
}

int solve(vector<vector<int>>& p) {
   int n = p.size(), cost = 0;
   if (n < 2) return 0;

   vector<int> distance(n, MAX);
   vector<bool> visited(n);

   distance[0] = 0;

   for (int i = 0; i < n; i++) {
      int min_d = MAX, node = 0;
      for (int j = 0; j < n; j++) {
         if (!visited[j] && distance[j] < min_d) {
            min_d = distance[j];
            node = j;
         }
      }

      visited[node] = true;
      cost += distance[node];

      for (int j = 0; j < n; j++) {
         if (!visited[j]) {
            int d = interval(node, j, p);
            distance[j] = min(distance[j], d);
         }
      }
   }
   return cost;
}

int main(){
   vector<vector<int>> points = {{0, 0},{0, 2},{0, -2},{2, 0},{-2, 0}, {2, 3}, {2, -3}};
cout << solve(points);
}