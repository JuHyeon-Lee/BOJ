#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	getline(cin, s, '\n');

	vector<int> words;
	int cnt = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			if (cnt != 0) words.push_back(cnt);
			cnt = 0;
		}
		else cnt++;

		if (i == s.length() - 1) {
			if (cnt != 0) words.push_back(cnt);
		}
	}

	cout << words.size() << endl;

	return 0;
}