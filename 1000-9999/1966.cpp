#include <iostream>
#include <queue>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int T;
	cin >> T;
	while (T--) {

		int N, M;
		cin >> N >> M;

		int ans[100];
		for (int i = 0; i < 100; i++) {
			ans[i] = 0;
		}

		queue<pair<int, int>> doc;
		for (int i = 0; i < N; i++) {
			int p;
			cin >> p;
			doc.push({ i, p });
		}

		int a = 1;
		while (!doc.empty()) {
			int p1 = doc.front().second;
			int p2 = p1;
			for (int i = 0; i < doc.size(); i++) {
				doc.push(doc.front());
				doc.pop();
				if (doc.front().second > p2) {
					p2 = doc.front().second;
					break;
				}
			}
			if (p1 == p2) {
				ans[doc.front().first] = a;
				a++;
				doc.pop();
			}
		}

		cout << ans[M] << endl;

	}

	return 0;
}