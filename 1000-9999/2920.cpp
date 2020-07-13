#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int way = 0;

	int n1, n2;
	cin >> n1 >> n2;

	if (n1 > n2) way = -1;
	else way = 1;

	int before = n2;
	for (int i = 0; i < 6; i++) {
		int n;
		cin >> n;
		if (way == -1) {
			if (n > before) {
				way = 0;
				break;
			}
		}
		if (way == 1) {
			if (n < before) {
				way = 0;
				break;
			}
		}
		before = n;
	}

	if (way == -1) cout << "descending" << endl;
	if (way == 1) cout << "ascending" << endl;
	if (way == 0) cout << "mixed" << endl;

	return 0;
}