#include <iostream>
#include <math.h>

using namespace std;

int GCD(int a, int b) {
	if (a % b == 0) return b;
	return GCD(b, a % b);
}

int LCM(int a, int b) {
	return (a * b) / GCD(a, b);
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;
	while (T--) {

		int M, N, x, y;
		cin >> M >> N >> x >> y;

		while (1) {
			if (x > LCM(M, N) || (x - 1) % N + 1 == y) break;
			x += M;
		}

		if (x > LCM(M, N)) cout << -1 << endl;
		else cout << x << endl;

	}

	return 0;
}