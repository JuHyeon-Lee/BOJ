#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int max_idx = 0;
	int max = 0;
	for (int i = 0; i < 9; i++) {
		int n;
		cin >> n;
		if (max < n) {
			max = n;
			max_idx = i + 1;
		}
	}

	cout << max << endl << max_idx << endl;

	return 0;
}