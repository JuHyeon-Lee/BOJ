#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int map[25][25];
int visit[25][25];

int bfs(int N, int x, int y) {
	int cnt = 0;
	queue<pair<int, int>> q;
	q.push({ x,y });
	visit[x][y] = true;

	while (!q.empty()) {

		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		cnt++;

		if (a > 0) {
			if (map[a - 1][b]) {
				if (!visit[a - 1][b]) {
					visit[a - 1][b] = true;
					q.push({ a - 1, b });
				}
			}
		}
		if (a < N - 1) {
			if (map[a + 1][b]) {
				if (!visit[a + 1][b]) {
					visit[a + 1][b] = true;
					q.push({ a + 1, b });
				}
			}
		}
		if (b > 0) {
			if (map[a][b - 1]) {
				if (!visit[a][b - 1]) {
					visit[a][b - 1] = true;
					q.push({ a, b - 1 });
				}
			}
		}
		if (b < N - 1) {
			if (map[a][b + 1]) {
				if (!visit[a][b + 1]) {
					visit[a][b + 1] = true;
					q.push({ a, b + 1 });
				}
			}
		}

	}

	return cnt;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < N; j++) {
			map[i][j] = s[j] - 48;
		}
	}

	vector<int> village;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] && !visit[i][j]) village.push_back(bfs(N, i, j));
		}
	}

	sort(village.begin(), village.end());

	cout << village.size() << endl;
	for (int i = 0; i < village.size(); i++) {
		cout << village[i] << endl;
	}

	return 0;
}