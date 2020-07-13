#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int cnt = 0;

	int N;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;

		set<char> s;

		bool group = true;
		char before = '1';
		for (int i = 0; i < str.length(); i++) {
			if (before != str[i] && s.find(str[i]) != s.end()) {
				group = false;
				break;
			}
			s.insert(str[i]);
			before = str[i];
		}

		if (group) cnt++;
	}

	cout << cnt << endl;

	return 0;
}