#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int T;
	cin >> T;
	while (T--) {
		string s, num;
		int abc;
		cin >> s >> abc >> num;

		deque<int> d;
		string str = "";
		for (int i = 0; i < num.length(); i++) {
			if (num[i] > 47 && num[i] < 58) str += num[i];
			else if (str != "") {
				d.push_back(stoi(str));
				str = "";
			}
		}

		bool error = false;
		bool dir = true;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'R') dir = !dir;
			if (s[i] == 'D') {
				if (d.size() == 0) {
					error = true;
					break;
				}
				if (dir) d.pop_front();
				else d.pop_back();
			}
		}

		if (error) {
			cout << "error" << endl;
			continue;
		}

		if (dir) {
			cout << "[";
			while (!d.empty()) {
				cout << d.front();
				d.pop_front();
				if (d.size() != 0) cout << ",";
			}
			cout << "]" << endl;
		}
		else {
			cout << "[";
			while (!d.empty()) {
				cout << d.back();
				d.pop_back();
				if (d.size() != 0) cout << ",";
			}
			cout << "]" << endl;
		}


	}

	return 0;
}