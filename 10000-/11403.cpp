#include <iostream>

using namespace std;

bool graph[100][100];
bool visit[100][100];

void dfs(int N, int V, int cur) {
	for (int i = 0; i < N; i++) {
		if (graph[cur][i]) {
			if (!visit[V][i]) {
				visit[V][i] = true;
				dfs(N, V, i);
			}
		}
	}
}

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			bool b;
			cin >> b;
			graph[i][j] = b;
		}
	}

	for (int i = 0; i < N; i++) {
		dfs(N, i, i);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << visit[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}