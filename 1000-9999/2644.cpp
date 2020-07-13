#include <iostream>
#include <queue>

using namespace std;

bool graph[101][101];
bool visit[101];

int bfs(int n, int s, int e) {
	queue<int> q;
	q.push(s);
	visit[s] = true;
	int before;
	int cnt = 0;
	while (!q.empty()) {
		cnt++;
		before = q.size();
		for (int i = 0; i < before; i++) {
			int f = q.front();
			q.pop();
			for (int j = 1; j <= n; j++) {
				if (graph[f][j]) {
					if (!visit[j]) {
						if (j == e) return cnt;
						visit[j] = true;
						q.push(j);
					}
				}
			}
		}
	}
	return -1;
}

int main() {
	std::ios::sync_with_stdio(false);

	int n, s, e, m;
	cin >> n >> s >> e >> m;

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		graph[u][v] = true;
		graph[v][u] = true;
	}

	cout << bfs(n, s, e) << endl;

	return 0;
}