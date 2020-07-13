#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int T;
	cin >> T;
	while (T--) {

		string s;
		cin >> s;

		map<int, bool> m;
		for (int i = 0; i < s.length(); i++) {
			m[(int)s[i]] = true;
		}

		int sum = 0;
		for (int i = 65; i < 91; i++) {
			if (m.find(i) == m.end()) {
				sum += i;
			}
		}

		cout << sum << endl;

	}

	return 0;
}