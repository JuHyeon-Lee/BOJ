#include <iostream>
#include <queue>

using namespace std;

int visit[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	for (int i = 0; i < 100001; i++) {
		visit[i] = -1;
	}

	queue<int> q;
	q.push(N);
	visit[N] = 0;

	int cnt = 0;
	while (!q.empty()) {
		cnt++;
		int before = q.size();
		for (int i = 0; i < before; i++) {
			int n = q.front();
			q.pop();
			if (n > 0) {
				if (visit[n - 1] == -1) {
					visit[n - 1] = cnt;
					q.push(n - 1);
				}
			}
			if (n < 100000) {
				if (visit[n + 1] == -1) {
					visit[n + 1] = cnt;
					q.push(n + 1);
				}
			}
			if (n * 2 < 100001) {
				if (visit[n * 2] == -1) {
					visit[n * 2] = cnt;
					q.push(n * 2);
				}
			}
		}
	}

	cout << visit[K] << endl;

	return 0;
}