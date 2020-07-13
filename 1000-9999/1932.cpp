#include <iostream>
#include <vector>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	vector<vector<int>> dp;
	for (int i = 1; i <= n; i++) {
		vector<int> tmp;
		for (int j = 0; j < i; j++) {
			int num;
			cin >> num;
			tmp.push_back(num);
		}
		dp.push_back(tmp);
	}

	for (int i = n - 2; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			if (dp[i + 1][j] > dp[i + 1][j + 1]) dp[i][j] += dp[i + 1][j];
			else dp[i][j] += dp[i + 1][j + 1];
		}
	}

	cout << dp[0][0] << endl;

	return 0;
}