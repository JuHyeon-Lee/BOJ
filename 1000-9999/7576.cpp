#include <iostream>
#include <queue>

using namespace std;

int map[1000][1000];

int bfs(int N, int M) {
	queue<pair<int, int>> q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 1) q.push({ i,j });
		}
	}

	int cnt = -1;
	while (!q.empty()) {
		int before;
		before = q.size();
		cnt++;
		for (int i = 0; i < before; i++) {
			int x = q.front().first;
			int y = q.front().second;
			q.pop();
			if (x > 0) {
				if (map[x - 1][y] == 0) {
					map[x - 1][y] = 1;
					q.push({ x - 1,y });
				}
			}
			if (x < N - 1) {
				if (map[x + 1][y] == 0) {
					map[x + 1][y] = 1;
					q.push({ x + 1,y });
				}
			}
			if (y > 0) {
				if (map[x][y - 1] == 0) {
					map[x][y - 1] = 1;
					q.push({ x,y - 1 });
				}
			}
			if (y < M - 1) {
				if (map[x][y + 1] == 0) {
					map[x][y + 1] = 1;
					q.push({ x,y + 1 });
				}
			}
		}

	}

	return cnt;
}

int main() {
	std::ios::sync_with_stdio(false);

	int N, M;
	cin >> M >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int n;
			cin >> n;
			map[i][j] = n;
		}
	}

	int cnt = bfs(N, M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 0) cnt = -1;
		}
	}

	cout << cnt << endl;

	return 0;
}