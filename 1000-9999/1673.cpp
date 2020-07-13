#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int n, k;
	while (cin >> n >> k) {

		int sum = 0;
		while (1) {
			if (n / k == 0) break;
			sum += n - n%k;
			int tmp = n / k;
			n %= k;
			n += tmp;
		}
		sum += n;

		cout << sum << endl;
	}

	return 0;
}