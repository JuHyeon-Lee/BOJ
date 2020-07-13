#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	set<string> s;
	s.insert("c=");
	s.insert("c-");
	s.insert("dz=");
	s.insert("d-");
	s.insert("lj");
	s.insert("nj");
	s.insert("s=");
	s.insert("z=");

	string str;
	cin >> str;

	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {

		if (i < str.length() - 2) {
			string tmp;
			tmp += str[i];
			tmp += str[i + 1];
			tmp += str[i + 2];
			if (s.find(tmp) != s.end()) {
				i += 2;
				cnt++;
				continue;
			}
		}

		if (i < str.length() - 1) {
			string tmp;
			tmp += str[i];
			tmp += str[i + 1];
			if (s.find(tmp) != s.end()) {
				i++;
				cnt++;
				continue;
			}
		}

		cnt++;
	}

	cout << cnt << endl;

	return 0;
}