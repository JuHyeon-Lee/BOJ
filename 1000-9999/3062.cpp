#include <iostream>
#include <string>

using namespace std;

int main() {
	std::ios::sync_with_stdio(false);

	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		string s2 = "";
		for (int i = s.length() - 1; i >= 0; i--) {
			s2 += s[i];
		}
		string sum = to_string(stoi(s) + stoi(s2));
		string ans = "YES";
		for (int i = 0; i < sum.length(); i++) {
			if (sum[i] != sum[sum.length() - i - 1]) ans = "NO";
		}
		cout << ans << endl;
	}

	return 0;
}