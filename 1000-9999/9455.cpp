#include <iostream>
#include <vector>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int T;
	cin >> T;
	while (T--) {

		int m, n;
		cin >> m >> n;

		vector<vector<int>> map;
		for (int i = 0; i < m; i++) {
			vector<int> tmp;
			for (int j = 0; j < n; j++) {
				int input;
				cin >> input;
				tmp.push_back(input);
			}
			map.push_back(tmp);
		}

		int cnt = 0;
		for (int a = 0; a < m - 1; a++) {
			for (int i = m - 2; i >= a; i--) {
				for (int j = 0; j < n; j++) {
					if (map[i][j] == 1) {
						if (map[i + 1][j] == 0) {
							map[i + 1][j] = 1;
							map[i][j] = 0;
							cnt++;
						}
					}
				}
			}
		}

		cout << cnt << endl;
	}

	return 0;
}