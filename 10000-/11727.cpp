#include <iostream>

using namespace std;

int bin[1001][1001];

int getBin(int n, int r) {
	if (n == r) return 1;
	if (r == 0) return 1;
	if (r == 1) return n;

	if (bin[n][r] != 0) return bin[n][r];

	return bin[n][r] = (getBin(n - 1, r - 1) + getBin(n - 1, r)) % 10007;
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	int sum = 0;
	for (int i = 0; i <= N / 2; i++) {
		for (int j = i; j >= 0; j--) {
			sum += getBin(N - i, N - (2 * i)) * getBin(i, j);
			sum %= 10007;
		}

	}

	cout << sum << endl;

	return 0;
}