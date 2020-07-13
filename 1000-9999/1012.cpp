#include <iostream>

using namespace std;

bool map[100][100];
bool visit[100][100];

void dfs(int M, int N, int x, int y) {
	visit[x][y] = true;
	if (x > 0) {
		if (map[x - 1][y]) {
			if (!visit[x - 1][y]) {
				dfs(M, N, x - 1, y);
			}
		}
	}
	if (x < M - 1) {
		if (map[x + 1][y]) {
			if (!visit[x + 1][y]) {
				dfs(M, N, x + 1, y);
			}
		}
	}
	if (y > 0) {
		if (map[x][y - 1]) {
			if (!visit[x][y - 1]) {
				dfs(M, N, x, y - 1);
			}
		}
	}
	if (y < N - 1) {
		if (map[x][y + 1]) {
			if (!visit[x][y + 1]) {
				dfs(M, N, x, y + 1);
			}
		}
	}
}

int main() {
	std::ios::sync_with_stdio(false);

	int T;
	cin >> T;
	while (T--) {

		int M, N, K;
		cin >> M >> N >> K;

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				map[i][j] = false;
				visit[i][j] = false;
			}
		}

		for (int i = 0; i < K; i++) {
			int X, Y;
			cin >> X >> Y;
			map[X][Y] = true;
		}

		//for (int i = 0; i < M; i++) {
		//	for (int j = 0; j < N; j++) {
		//		cout << map[i][j] << " ";
		//	}
		//	cout << endl;
		//}

		int cnt = 0;
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (map[i][j]) {
					if (!visit[i][j]) {
						cnt++;
						dfs(M, N, i, j);
					}
				}
			}
		}
		cout << cnt << endl;

	}

	return 0;
}