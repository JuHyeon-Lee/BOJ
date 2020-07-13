#include <iostream>
#include <vector>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;

	vector<int> coin;
	for (int i = 0; i < N; i++) {
		int m;
		cin >> m;
		coin.push_back(m);
	}

	int cnt = 0;
	for (int i = coin.size() - 1; i >= 0; i--) {
		cnt += K / coin[i];
		K %= coin[i];
	}

	cout << cnt << endl;

	return 0;
}