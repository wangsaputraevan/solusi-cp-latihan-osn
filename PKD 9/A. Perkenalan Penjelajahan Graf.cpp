#include <bits/stdc++.h>

#define ll long long

using namespace std;

const int LIM = 1e5;

bitset<LIM + 1> visited;
vector<vector<int>> adjList(LIM + 1);

void DFS(int baseNode) {
	if (visited[baseNode]) return;
	visited[baseNode] = true;
	for (const int& adj : adjList[baseNode]) {
		if (!visited[adj]) {
			DFS(adj);
		}
	}
}

int main(const int agrc, char* agrv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int n, m, count;
	cin >> n >> m;
	
	count = 0;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}
	
	for (int j = 1; j <= n; j++) {
		if (!visited[j]) {
			DFS(j);	
			count++;
		}
	}
	
	cout << count;
    
    return 0;
}

