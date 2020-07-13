#include <iostream>
#include <queue>

using namespace std;

struct node {
	int x;
	int y;
	int z;
	node(int h, int m, int n) {
		this->x = h;
		this->y = m;
		this->z = n;
	}
};

int map[100][100][100];

int bfs(int N, int M, int H) {
	queue<node> q;
	for (int h = 0; h < H; h++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (map[h][i][j] == 1) q.push(node(h, i, j));
			}
		}
	}


	int cnt = -1;
	while (!q.empty()) {
		int before;
		before = q.size();
		cnt++;
		for (int i = 0; i < before; i++) {
			int x = q.front().x;
			int y = q.front().y;
			int z = q.front().z;
			q.pop();
			if (x > 0) {
				if (map[x - 1][y][z] == 0) {
					map[x - 1][y][z] = 1;
					q.push(node(x - 1, y, z));
				}
			}
			if (x < H - 1) {
				if (map[x + 1][y][z] == 0) {
					map[x + 1][y][z] = 1;
					q.push(node(x + 1, y, z));
				}
			}
			if (y > 0) {
				if (map[x][y - 1][z] == 0) {
					map[x][y - 1][z] = 1;
					q.push(node(x, y - 1, z));
				}
			}
			if (y < N - 1) {
				if (map[x][y + 1][z] == 0) {
					map[x][y + 1][z] = 1;
					q.push(node(x, y + 1, z));
				}
			}
			if (z > 0) {
				if (map[x][y][z - 1] == 0) {
					map[x][y][z - 1] = 1;
					q.push(node(x, y, z - 1));
				}
			}
			if (z < M - 1) {
				if (map[x][y][z + 1] == 0) {
					map[x][y][z + 1] = 1;
					q.push(node(x, y, z + 1));
				}
			}
		}

	}

	return cnt;
}

int main() {
	std::ios::sync_with_stdio(false);

	int N, M, H;
	cin >> M >> N >> H;

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int h = 0; h < M; h++) {
				int n;
				cin >> n;
				map[i][j][h] = n;
			}
		}
	}

	int cnt = bfs(N, M, H);
	for (int h = 0; h < H; h++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (map[h][i][j] == 0) cnt = -1;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}