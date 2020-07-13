#include <iostream>
#include <string>

using namespace std;

int num[42];

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	cin >> T;
	while (T--) {

		string s;
		cin >> s;

		int total = 0;
		int score = 0;
		char before = 'X';
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'O') {
				score++;
				total += score;
			}
			else if (s[i] == 'X') {
				score = 0;
			}
		}

		cout << total << endl;
	}

	return 0;
}