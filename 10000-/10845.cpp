#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	std::ios::sync_with_stdio(0);

	int N;
	cin >> N;
	queue<int> q;
	while (N--) {

		string s;
		cin >> s;

		if (s == "push") {
			int n;
			cin >> n;
			q.push(n);
		}
		if (s == "pop") {
			if (q.empty()) cout << -1 << endl;
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		if (s == "empty") {
			cout << q.empty() << endl;
		}
		if (s == "size") {
			cout << q.size() << endl;
		}
		if (s == "front") {
			if (q.empty()) cout << -1 << endl;
			else cout << q.front() << endl;
		}
		if (s == "back") {
			if (q.empty()) cout << -1 << endl;
			else cout << q.back() << endl;
		}

	}

	return 0;
}