#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		int dp[2][100000];

		int n;
		cin >> n;

		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++) {
				int s;
				cin >> s;
				dp[i][j] = s;
			}
		}

		for (int i = 1; i < n; i++) {
			int big1, big2;
			if (i > 0) {
				big1 = dp[1][i - 1];
				big2 = dp[0][i - 1];
			}
			if (i > 1) {
				big1 = max(big1, dp[1][i - 2]);
				big2 = max(big2, dp[0][i - 2]);
			}
			dp[0][i] += big1;
			dp[1][i] += big2;
		}

		cout << max(dp[0][n - 1], dp[1][n - 1]) << endl;
		
	}

	return 0;
}