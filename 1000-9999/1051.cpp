#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> map;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		vector<int> tmp;
		for (int j = 0; j < s.length(); j++) {
			tmp.push_back(s[j] - 48);
		}
		map.push_back(tmp);
	}

	int max = 0;
	// i는 정사각형 변의 길이
	for (int i = 0; i < N; i++) {

		for (int a = 0; a < N - i; a++) {
			for (int b = 0; b < M - i; b++) {
				if ((map[a][b] == map[a + i][b]) &&
					(map[a][b] == map[a][b + i]) &&
					(map[a][b] == map[a + i][b + i])) {
					if (max < (i + 1)*(i + 1)) max = (i + 1)*(i + 1);
				}
			}
		}

	}

	cout << max << endl;

	return 0;
}