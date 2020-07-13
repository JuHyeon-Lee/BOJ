#include <iostream>

using namespace std;

long long dp[10][101];

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 1; i < 10; i++) {
		dp[i][1] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			if (j > 0) dp[j][i] += dp[j - 1][i - 1];
			if (j < 9) dp[j][i] += dp[j + 1][i - 1];
			dp[j][i] %= 1000000000;
		}
	}

	long long sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += dp[i][N];
	}

	cout << sum % 1000000000<< endl;

	return 0;
}