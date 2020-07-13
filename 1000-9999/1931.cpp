#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool func(pair<int, int> a, pair<int, int> b) {
	if (a.second != b.second)
		return a.second < b.second;
	else
		return a.first < b.first;
}

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<pair<int, int>> t;
	for (int i = 0; i < N; i++) {
		int s, e;
		cin >> s >> e;
		t.push_back({ s, e });
	}

	sort(t.begin(), t.end(), func);

	int cnt = 0;
	int before = 0;
	for (int i = 0; i < N; i++) {

		int s = t[i].first;
		int e = t[i].second;

		if (s >= before) {
			cnt++;
			before = e;
		}
	}

	cout << cnt << endl;

	return 0;
}