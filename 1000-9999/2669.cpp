#include <iostream>

using namespace std;

bool map[100][100] = { false, };

int main() {
	std::ios::sync_with_stdio(false);

	for (int i = 0; i < 4; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int k = x1; k < x2; k++) {
			for (int j = y1; j < y2; j++) {
				map[k][j] = true;
			}
		}

	}

	int area = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (map[i][j]) area++;
		}
	}
	cout << area << endl;

	return 0;
}