#include <iostream>
#include <string>

using namespace std;

int main() {

	int num[26];
	fill_n(num, 26, -1);
	string s;
	cin >> s;

	for (int i = s.length() - 1; i >= 0; i--) {
		num[(int)s[i] - 97] = i;
	}

	for (int n : num) {
		cout << n << " ";
	}
	cout << endl;

	return 0;
}