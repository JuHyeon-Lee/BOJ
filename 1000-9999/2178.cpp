#include <iostream>
#include <string>
#include <queue>

using namespace std;

bool map[100][100];
int visit[100][100];

void bfs(int N, int M) {
	queue<pair<int, int>> q;
	q.push({ 0,0 });

	int before;
	int cnt = 1;
	while (!q.empty()) {

		cnt++;
		before = q.size();

		for (int i = 0; i < before; i++) {

			int x = q.front().first;
			int y = q.front().second;
			q.pop();

			if (x > 0) {
				if (map[x - 1][y]) {
					if (visit[x - 1][y] == 0) {
						visit[x - 1][y] = cnt;
						q.push({ x - 1,y });
					}
				}
			}
			if (x < N - 1) {
				if (map[x + 1][y]) {
					if (visit[x + 1][y] == 0) {
						visit[x + 1][y] = cnt;
						q.push({ x + 1,y });
					}
				}
			}
			if (y > 0) {
				if (map[x][y - 1]) {
					if (visit[x][y - 1] == 0) {
						visit[x][y - 1] = cnt;
						q.push({ x,y - 1 });
					}
				}
			}
			if (y < M - 1) {
				if (map[x][y + 1]) {
					if (visit[x][y + 1] == 0) {
						visit[x][y + 1] = cnt;
						q.push({ x,y + 1 });
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

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < M; j++) {
			map[i][j] = s[j] - 48;
		}
	}

	bfs(N, M);
	cout << visit[N - 1][M - 1] << endl;

	return 0;
}