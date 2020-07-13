#include <iostream>
#include <math.h>

using namespace std;

int col[15];
int N, ans;

bool isPos(int row, int x) {
	for (int i = row - 1; i >= 0; i--) {
		if (col[i] == x) return false;
		if (col[i] - x == row - i) return false;
		if (col[i] - x == i - row) return false;
	}
	return true;
}

void dfs(int row) {
	if (row == N) {
		ans++;
		return;
	}

	for (int i = 0; i < N; i++) {
		if (isPos(row, i)) {
			col[row] = i;
			dfs(row + 1);
			col[row] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N;
	dfs(0);

	cout << ans << endl;

	return 0;
}