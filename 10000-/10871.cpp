#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int N, X;
	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		if (X > n) cout << n << " ";
	}

	return 0;
}