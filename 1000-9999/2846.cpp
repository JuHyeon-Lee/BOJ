#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int before = 10000;
	int start;
	int best_h = 0;
	bool dir = false;
	for (int i = 0; i < N; i++) {

		int h;
		cin >> h;

		if (before < h) {
			if (!dir) start = before;
			dir = true;
		}
		else {
			if (dir) {
				if (best_h < before - start)
					best_h = before - start;
			}
			dir = false;
		}

		before = h;
	}

	if (dir) {
		if (best_h < before - start)
			best_h = before - start;
	}

	cout << best_h << endl;

	return 0;
}