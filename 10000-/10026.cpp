#include <iostream>
#include <string>

using namespace std;

char map[100][100];
bool visit[100][100];
bool visit2[100][100];

void dfs(int N, char c, int x, int y) {
	visit[x][y] = true;
	if (x > 0) {
		if (map[x - 1][y] == c) {
			if (!visit[x - 1][y]) dfs(N, c, x - 1, y);
		}
	}
	if (x < N - 1) {
		if (map[x + 1][y] == c) {
			if (!visit[x + 1][y]) dfs(N, c, x + 1, y);
		}
	}
	if (y > 0) {
		if (map[x][y - 1] == c) {
			if (!visit[x][y - 1]) dfs(N, c, x, y - 1);
		}
	}
	if (y < N - 1) {
		if (map[x][y + 1] == c) {
			if (!visit[x][y + 1]) dfs(N, c, x, y + 1);
		}
	}
}

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			map[i][j] = s[j];
		}
	}

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visit[i][j]) {
				dfs(N, map[i][j], i, j);
				cnt++;
			}
		}
	}
	cout << cnt << " ";

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 'G') map[i][j] = 'R';
			visit[i][j] = false;
		}
	}

	cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!visit[i][j]) {
				dfs(N, map[i][j], i, j);
				cnt++;
			}
		}
	}
	cout << cnt << endl;

	return 0;
}