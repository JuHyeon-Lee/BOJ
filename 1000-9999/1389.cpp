#include <iostream>
#include <queue>

using namespace std;

bool graph[101][101];
int visit[101][101];

void bfs(int N, int V, int cur) {

	queue<int> q;
	q.push(cur);

	int cnt = 0;
	int before = 0;
	while (!q.empty()) {
		cnt++;
		before = q.size();
		for (int i = 0; i < before; i++) {
			int n = q.front();
			q.pop();
			for (int j = 1; j <= N; j++) {
				if (graph[n][j]) {
					if (!visit[V][j]) {
						q.push(j);
						visit[V][j] = cnt;
					}
				}
			}
		}
	}

}

int main() {
	std::ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int s, e;
		cin >> s >> e;
		graph[s][e] = true;
		graph[e][s] = true;
	}

	for (int i = 1; i <= N; i++) {
		bfs(N, i, i);
	}

	int min_idx = 0;
	int min_num = 101;
	for (int i = N; i > 0; i--) {
		int sum = 0;
		for (int j = 1; j <= N; j++) {
			if (i != j) sum += visit[i][j];
		}
		if (min_num >= sum) {
			min_idx = i;
			min_num = sum;
		}
	}
	cout << min_idx << endl;

	return 0;
}