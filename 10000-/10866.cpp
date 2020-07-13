#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
	std::ios::sync_with_stdio(0);

	int N;
	cin >> N;
	deque<int> d;
	while (N--) {

		string s;
		cin >> s;

		if (s == "push_front") {
			int n;
			cin >> n;
			d.push_front(n);
		}
		if (s == "push_back") {
			int n;
			cin >> n;
			d.push_back(n);
		}
		if (s == "pop_front") {
			if (d.empty()) cout << -1 << endl;
			else {
				cout << d.front() << endl;
				d.pop_front();
			}
		}
		if (s == "pop_back") {
			if (d.empty()) cout << -1 << endl;
			else {
				cout << d.back() << endl;
				d.pop_back();
			}
		}
		if (s == "empty") {
			cout << d.empty() << endl;
		}
		if (s == "size") {
			cout << d.size() << endl;
		}
		if (s == "front") {
			if (d.empty()) cout << -1 << endl;
			else cout << d.front() << endl;
		}
		if (s == "back") {
			if (d.empty()) cout << -1 << endl;
			else cout << d.back() << endl;
		}

	}

	return 0;
}