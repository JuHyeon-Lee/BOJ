#include <iostream>

using namespace std;

int dp[1000001];

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i <= N; i++) {
		dp[i] = -1;
	}
	dp[N] = 0;

	for (int i = N; i > 0; i--) {

		if (i <= N / 2) {
			if (dp[i * 2] != -1) {
				if (dp[i] == -1) dp[i] = dp[i * 2] + 1;
				else if (dp[i] > dp[i * 2] + 1) dp[i] = dp[i * 2] + 1;
			}
		}

		if (i <= N / 3) {
			if (dp[i * 3] != -1) {
				if (dp[i] == -1) dp[i] = dp[i * 3] + 1;
				else if (dp[i] > dp[i * 3] + 1) dp[i] = dp[i * 3] + 1;
			}
		}

		if (i < N) {
			if (dp[i+1] != -1) {
				if (dp[i] == -1) dp[i] = dp[i+1] + 1;
				else if (dp[i] > dp[i+1] + 1) dp[i] = dp[i+1] + 1;
			}
		}
	}

	cout << dp[1] << endl;

	return 0;
}