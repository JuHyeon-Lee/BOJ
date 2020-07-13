#include <iostream>
#include <string>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	string s1, s2;
	char c;
	cin >> s1 >> c >> s2;

	if (c == '*') {
		cout << 1;
		int len = s1.length() + s2.length() - 2;
		for (int i = 0; i < len; i++) {
			cout << 0;
		}
		cout << endl;
	}
	else if (c == '+') {
		int lenA, lenB;
		if (s1.length() > s2.length()) {
			lenA = s1.length();
			lenB = s2.length();
		}
		else {
			lenA = s2.length();
			lenB = s1.length();
		}

		if (lenA == lenB) {
			cout << 2;
			for (int i = 0; i < lenA - 1; i++) {
				cout << 0;
			}
			cout << endl;
		}
		else {
			cout << 1;
			for (int i = 0; i < lenA - lenB - 1; i++) {
				cout << 0;
			}
			cout << 1;
			for (int i = 0; i < lenB - 1; i++) {
				cout << 0;
			}
			cout << endl;
		}

	}


	return 0;
}