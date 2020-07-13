#include <iostream>
#include <vector>
#include <string>

using namespace std;

int calcMax(vector<vector<char>> map) {
	int max = 0;
	for (int i = 0; i < map.size(); i++) {
		int cnt = 0;
		char before = 'A';
		for (int j = 0; j < map[i].size(); j++) {
			if (before == map[i][j]) cnt++;
			else {
				before = map[i][j];
				cnt = 0;
			}
			if (cnt + 1 > max) max = cnt + 1;
		}
	}
	for (int i = 0; i < map.size(); i++) {
		int cnt = 0;
		char before = 'A';
		for (int j = 0; j < map[i].size(); j++) {
			if (before == map[j][i]) cnt++;
			else {
				before = map[j][i];
				cnt = 0;
			}
			if (cnt + 1 > max) max = cnt + 1;
		}
	}
	return max;
}

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<vector<char>> map;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		vector<char> tmp;
		for (int j = 0; j < N; j++) {
			tmp.push_back(s[j]);
		}
		map.push_back(tmp);
	}

	int max = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			char tmp = map[i][j];
			map[i][j] = map[i][j + 1];
			map[i][j + 1] = tmp;

			int cnt = calcMax(map);
			if (cnt > max) max = cnt;

			map[i][j + 1] = map[i][j];
			map[i][j] = tmp;
		}
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N; j++) {
			char tmp = map[i][j];
			map[i][j] = map[i + 1][j];
			map[i + 1][j] = tmp;

			int cnt = calcMax(map);
			if (cnt > max) max = cnt;

			map[i + 1][j] = map[i][j];
			map[i][j] = tmp;
		}
	}

	cout << max << endl;

	return 0;
}