#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, M;
	scanf("%d%d", &N, &M);

	vector<vector<int>> map;
	for (int i = 0; i < N; i++) {
		vector<int> tmp;
		for (int j = 0; j < M; j++) {
			int num;
			scanf("%d", &num);
			tmp.push_back(num);
		}
		map.push_back(tmp);
	}

	int max_sum = 0;

	// 일자 가로
	for (int i = 0; i < map.size(); i++) {
		vector<int> row = map[i];
		for (int j = 0; j < row.size() - 3; j++) {
			int sum = map[i][j] + map[i][j + 1] + map[i][j + 2] + map[i][j + 3];
			if (sum > max_sum)
				max_sum = sum;
		}
	}

	// 일자 세로
	for (int i = 0; i < map.size() - 3; i++) {
		vector<int> row = map[i];
		for (int j = 0; j < row.size(); j++) {
			int sum = map[i][j] + map[i + 1][j] + map[i + 2][j] + map[i + 3][j];
			if (sum > max_sum)
				max_sum = sum;
		}
	}

	// 네모
	for (int i = 0; i < map.size() - 1; i++) {
		vector<int> row = map[i];
		for (int j = 0; j < row.size() - 1; j++) {
			int sum = map[i][j] + map[i + 1][j] + map[i][j + 1] + map[i + 1][j + 1];
			if (sum > max_sum)
				max_sum = sum;
		}
	}

	for (int i = 0; i < map.size() - 2; i++) {
		vector<int> row = map[i];
		for (int j = 0; j < row.size() - 1; j++) {
			int sum = map[i][j] + map[i + 1][j] + map[i + 2][j] + map[i + 2][j + 1];
			if (sum > max_sum)
				max_sum = sum;

			sum = map[i][j + 1] + map[i + 1][j + 1] + map[i + 2][j + 1] + map[i + 2][j];
			if (sum > max_sum)
				max_sum = sum;

			sum = map[i][j] + map[i + 1][j] + map[i + 1][j + 1] + map[i + 2][j + 1];
			if (sum > max_sum)
				max_sum = sum;

			sum = map[i][j + 1] + map[i + 1][j + 1] + map[i + 2][j + 1] + map[i + 1][j];
			if (sum > max_sum)
				max_sum = sum;

			sum = map[i][j] + map[i][j + 1] + map[i + 1][j + 1] + map[i + 2][j + 1];
			if (sum > max_sum)
				max_sum = sum;

			sum = map[i][j] + map[i + 1][j] + map[i + 2][j] + map[i][j + 1];
			if (sum > max_sum)
				max_sum = sum;

			sum = map[i][j + 1] + map[i + 1][j + 1] + map[i + 1][j] + map[i + 2][j];
			if (sum > max_sum)
				max_sum = sum;

			sum = map[i][j] + map[i + 1][j] + map[i + 2][j] + map[i + 1][j + 1];
			if (sum > max_sum)
				max_sum = sum;
		}
	}

	for (int i = 0; i < map.size() - 1; i++) {
		vector<int> row = map[i];
		for (int j = 0; j < row.size() - 2; j++) {
			int sum = map[i][j] + map[i][j + 1] + map[i][j + 2] + map[i + 1][j];
			if (sum > max_sum)
				max_sum = sum;

			sum = map[i][j] + map[i + 1][j] + map[i + 1][j + 1] + map[i + 1][j + 2];
			if (sum > max_sum)
				max_sum = sum;

			sum = map[i + 1][j] + map[i + 1][j + 1] + map[i][j + 1] + map[i][j + 2];
			if (sum > max_sum)
				max_sum = sum;

			sum = map[i][j] + map[i][j + 1] + map[i][j + 2] + map[i + 1][j + 1];
			if (sum > max_sum)
				max_sum = sum;

			sum = map[i + 1][j] + map[i + 1][j + 1] + map[i + 1][j + 2] + map[i][j + 2];
			if (sum > max_sum)
				max_sum = sum;

			sum = map[i][j] + map[i][j + 1] + map[i][j + 2] + map[i + 1][j + 2];
			if (sum > max_sum)
				max_sum = sum;

			sum = map[i][j] + map[i][j + 1] + map[i + 1][j + 1] + map[i + 1][j + 2];
			if (sum > max_sum)
				max_sum = sum;

			sum = map[i + 1][j] + map[i + 1][j + 1] + map[i][j + 1] + map[i + 1][j + 2];
			if (sum > max_sum)
				max_sum = sum;
		}
	}

	cout << max_sum << endl;

	return 0;
}