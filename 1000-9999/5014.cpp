#include <iostream>
#include <queue>

using namespace std;

int map[1000001];

void bfs(int F, int S, int U, int D) {
	queue<int> q;
	q.push(S);
	map[S] = 0;

	int cnt = 0;
	while (!q.empty()) {
		int before = q.size();
		cnt++;
		for (int i = 0; i < before; i++) {
			int n = q.front();
			q.pop();
			if (n > D) {
				if (map[n - D] == -1) {
					map[n - D] = cnt;
					q.push(n - D);
				}
			}
			if (n <= F - U) {
				if (map[n + U] == -1) {
					map[n + U] = cnt;
					q.push(n + U);
				}
			}
		}
	}
}

int main() {
	std::ios::sync_with_stdio(false);

	int F, S, G, U, D;
	cin >> F >> S >> G >> U >> D;

	for (int i = 0; i < 1000001; i++) {
		map[i] = -1;
	}

	bfs(F, S, U, D);

	if (map[G] == -1) cout << "use the stairs" << endl;
	else cout << map[G] << endl;

	return 0;
}