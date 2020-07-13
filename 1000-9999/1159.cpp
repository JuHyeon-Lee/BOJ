#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	map<char, int> m;
	for (int i = 97; i < 123; i++) {
		m[(char)i] = 0;
	}

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		m[s[0]]++;
	}

	map<char, int>::iterator it;
	int cnt = 0;
	for (it = m.begin(); it != m.end(); it++) {
		if (it->second > 4) {
			cout << it->first;
			cnt++;
		}
	}
	if (cnt == 0) cout << "PREDAJA";
	cout << endl;

	return 0;
}