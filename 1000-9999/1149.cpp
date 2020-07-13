#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cost[3][1000];

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int R, G, B;
		cin >> R >> G >> B;

		// 0:R 1:G 2:B
		cost[0][i] = R;
		cost[1][i] = G;
		cost[2][i] = B;
	}

	for (int i = 1; i < N; i++) {
		cost[0][i] = min(cost[1][i - 1], cost[2][i - 1]) + cost[0][i];
		cost[1][i] = min(cost[0][i - 1], cost[2][i - 1]) + cost[1][i];
		cost[2][i] = min(cost[0][i - 1], cost[1][i - 1]) + cost[2][i];
	}

	cout << min(min(cost[0][N - 1], cost[1][N - 1]), cost[2][N - 1]) << endl;

	return 0;
}