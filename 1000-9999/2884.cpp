#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int H, M;
	cin >> H >> M;

	M -= 45;
	if (M < 0) {
		M += 60;
		H -= 1;
		if (H < 0) H += 24;
	}

	cout << H << " " << M << endl;

	return 0;
}