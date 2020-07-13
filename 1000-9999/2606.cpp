#include <iostream>

using namespace std;

bool map[101][101];
bool visit[101];

void dfs(int V, int cur, int &cnt) {
	cnt++;
	visit[cur] = true;
	for (int i = 1; i <= V; i++) {
		if (map[cur][i]) {
			if (!visit[i]) {
				dfs(V, i, cnt);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int V, E;
	cin >> V >> E;

	for (int i = 0; i < E; i++) {
		int u, v;
		cin >> u >> v;
		map[u][v] = true;
		map[v][u] = true;
	}

	int cnt = -1;
	dfs(V, 1, cnt);

	cout << cnt << endl;

	return 0;
}