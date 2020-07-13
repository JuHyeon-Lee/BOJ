#include <iostream>
#include <algorithm>

using namespace std;

int arr[10001];
int dp[10001];

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		arr[i] = n;
	}

	dp[0] = arr[0];
	dp[1] = arr[0] + arr[1];
	for (int i = 2; i < N; i++) {
		dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 3] + arr[i-2] + arr[i]);
	}

	cout << dp[N - 1] << endl;

	return 0;
}