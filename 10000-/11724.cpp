#include <iostream>

using namespace std;

bool graph[1001][1001];
bool visit[1001];

void dfs(int N, int cur) {
	visit[cur] = true;
	for (int i = 1; i <= N; i++) {
		if (graph[cur][i]) {
			if (!visit[i]) dfs(N, i);
		}
	}
}

int main() {
	std::ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int u, v;
		cin >> u >> v;
		graph[u][v] = true;
		graph[v][u] = true;
	}

	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (!visit[i]) {
			cnt++;
			dfs(N, i);
		}
	}

	cout << cnt << endl;

	return 0;
}