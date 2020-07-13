#include <iostream>
#include <string>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] < 68) cout << (char)(s[i] + 23);
		else cout << (char)(s[i] - 3);
	}

	return 0;
}