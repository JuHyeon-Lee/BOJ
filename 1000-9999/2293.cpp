#include <iostream>
#include <vector>

using namespace std;

int dp[10001];

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int> coin;
	for (int i = 0; i < n; i++) {
		int price;
		cin >> price;
		coin.push_back(price);
	}

	dp[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j >= coin[i]) dp[j] += dp[j - coin[i]];
		}
	}

	for(int i=0; i<=k; i++) cout << dp[i] << endl;
	

	return 0;
}