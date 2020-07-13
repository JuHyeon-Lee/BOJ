#include <iostream>
#include <queue>

using namespace std;

int map[300][300];

void bfs(int I, int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x, y });
	map[x][y] = 0;

	int cnt = 0;
	while (!q.empty()) {
		int before = q.size();
		cnt++;
		for (int i = 0; i < before; i++) {
			int a = q.front().first;
			int b = q.front().second;
			q.pop();

			if (a > 1) {
				if (b > 0) {
					if (map[a - 2][b - 1] == -1) {
						map[a - 2][b - 1] = cnt;
						q.push({ a - 2, b - 1 });
					}
				}
				if (b < I - 1) {
					if (map[a - 2][b + 1] == -1) {
						map[a - 2][b + 1] = cnt;
						q.push({ a - 2, b + 1 });
					}
				}
			}
			if (a < I - 2) {
				if (b > 0) {
					if (map[a + 2][b - 1] == -1) {
						map[a + 2][b - 1] = cnt;
						q.push({ a + 2, b - 1 });
					}
				}
				if (b < I - 1) {
					if (map[a + 2][b + 1] == -1) {
						map[a + 2][b + 1] = cnt;
						q.push({ a + 2, b + 1 });
					}
				}
			}
			if (b > 1) {
				if (a > 0) {
					if (map[a - 1][b - 2] == -1) {
						map[a - 1][b - 2] = cnt;
						q.push({ a - 1, b - 2 });
					}
				}
				if (a < I - 1) {
					if (map[a + 1][b - 2] == -1) {
						map[a + 1][b - 2] = cnt;
						q.push({ a + 1, b - 2 });
					}
				}
			}
			if (b < I - 2) {
				if (a > 0) {
					if (map[a - 1][b + 2] == -1) {
						map[a - 1][b + 2] = cnt;
						q.push({ a - 1, b + 2 });
					}
				}
				if (a < I - 1) {
					if (map[a + 1][b + 2] == -1) {
						map[a + 1][b + 2] = cnt;
						q.push({ a + 1, b + 2 });
					}
				}
			}
		}
	}

}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		int I, x1, y1, x2, y2;
		cin >> I >> x1 >> y1 >> x2 >> y2;

		for (int i = 0; i < 300; i++) {
			for (int j = 0; j < 300; j++) {
				map[i][j] = -1;
			}
		}

		bfs(I, x1, y1);
		cout << map[x2][y2] << endl;
	}

	return 0;
}