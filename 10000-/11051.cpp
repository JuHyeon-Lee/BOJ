#include <iostream>

using namespace std;

int dp[1001][1001];

int getCom(int n, int r) {
	if (r == 0) return 1;
	if (n == r) return 1;
	if (dp[n][r] != 0) return dp[n][r];

	return dp[n][r] = (getCom(n - 1, r - 1) + getCom(n - 1, r)) % 10007;
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, r;
	cin >> n >> r;
	cout << getCom(n, r) << endl;

	return 0;
}