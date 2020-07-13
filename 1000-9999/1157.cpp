#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;

	map<char, int> m;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] > 96) s[i] -= 32;
		if (m.find(s[i]) == m.end()) m[s[i]] = 0;
		m[s[i]]++;
	}

	map<char, int>::iterator it;
	int max = 0;
	vector<char> max_idx;
	for (it = m.begin(); it != m.end(); it++) {
		//cout << it->first << " " << it->second << endl;
		if (max < it->second) {
			max = it->second;
			max_idx.clear();
			max_idx.push_back(it->first);
		}
		else if (max == it->second) max_idx.push_back(it->first);
	}

	if (max_idx.size() != 1) cout << "?" << endl;
	else cout << max_idx[0] << endl;

	return 0;
}