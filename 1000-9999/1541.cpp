#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	string s;
	cin >> s;

	queue<int> num;
	string tmp = "";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 48 && s[i] <= 57) {
			tmp += s[i];
		}
		else if (s[i] == '+') {
			int n = stoi(tmp);
			tmp = "";
			while (++i) {
				if (s[i] >= 48 && s[i] <= 57) {
					tmp += s[i];
				}
				else {
					i--;
					break;
				}
			}
			n += stoi(tmp);
			tmp = to_string(n);
		}
		else if (s[i] == '-') {
			num.push(stoi(tmp));
			tmp = "";
		}

		if (i == s.length() - 1) {
			num.push(stoi(tmp));
			tmp = "";
		}
	}

	int n = num.front();
	num.pop();
	while (!num.empty()) {
		n -= num.front();
		num.pop();
	}

	cout << n << endl;

	return 0;
}