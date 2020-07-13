#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int m[6] = { 500, 100, 50, 10, 5, 1 };

	int n;
	cin >> n;
	n = 1000 - n;

	int cnt = 0;
	for (int i = 0; i < 6; i++) {
		cnt += n / m[i];
		n %= m[i];
	}

	cout << cnt << endl;

	return 0;
}