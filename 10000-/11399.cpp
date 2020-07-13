#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int> v;
	for (int i = 0; i < N; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}

	sort(v.begin(), v.end());

	int sum = 0;
	for (int i = N; i > 0; i--) {
		sum += v[N - i] * i;
	}

	cout << sum << endl;

	return 0;
}