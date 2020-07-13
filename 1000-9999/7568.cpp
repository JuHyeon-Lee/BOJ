#include <iostream>
#include <vector>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<pair<int, int>> v;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}

	for (int i = 0; i < v.size(); i++) {
		int x = v[i].first;
		int y = v[i].second;
		int rank = 1;
		for (int j = 0; j < v.size(); j++) {
			if (v[j].first > x) {
				if (v[j].second > y) {
					rank++;
				}
			}
		}
		cout << rank << " ";
	}

	return 0;
}