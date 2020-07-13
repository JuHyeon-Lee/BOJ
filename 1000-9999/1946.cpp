#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T--) {

		int N;
		cin >> N;
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
		for (int i = 0; i < N; i++) {
			int paper, interview;
			cin >> paper >> interview;

			pq.push({ paper, interview });
		}

		int highest = N + 1;
		int cnt = 0;
		for (int i = 0; i < N; i++) {
			int n = pq.top().second;
			if (n < highest) {
				highest = n;
				cnt++;
			}
			pq.pop();
		}

		cout << cnt << endl;

	}


	return 0;
}