#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int ans[1000000];

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	stack<pair<int, int>> s;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;

		while (!s.empty() && s.top().second < n) {
			ans[s.top().first] = n;
			s.pop();
		}

		s.push({ i, n });
	}

	for (int i = 0; i < N; i++) {
		if (ans[i] == 0) cout << -1 << " ";
		else cout << ans[i] << " ";
	}

	return 0;
}
