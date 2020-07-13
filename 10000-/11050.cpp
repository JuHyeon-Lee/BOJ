#include <iostream>

using namespace std;

int bin[11][11];

int getBin(int n, int r) {
	if (n == r) return 1;
	if (r == 0) return 1;
	if (r == 1) return n;

	if (bin[n][r] != 0) return bin[n][r];

	return bin[n][r] = getBin(n - 1, r - 1) + getBin(n - 1, r);
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, K;
	cin >> N >> K;
	cout << getBin(N, K) << endl;

	return 0;
}