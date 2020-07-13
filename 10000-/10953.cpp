#include <iostream>
#include <string>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		int sum = s[0] + s[2] - 96;
		cout << sum << endl;
	}

	return 0;
}