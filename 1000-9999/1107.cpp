#include <iostream>
#include <string>
#include <map>

using namespace std;

map<int, bool> m;

bool contain(int num) {
	string s = to_string(num);
	for (int i = 0; i < s.length(); i++) {
		int n = s[i] - 48;
		if (!m[n]) return false;
	}
	return true;
}

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int M;
	cin >> M;

	for (int i = 0; i < 10; i++) {
		m[i] = true;
	}

	for (int i = 0; i < M; i++) {
		int bann;
		cin >> bann;
		m[bann] = false;
	}

	int min = 500001;
	for (int i = 0; i <= 1000000; i++) {
		if (contain(i)) {
			int cnt = to_string(i).length();
			if (i > N) cnt += i - N;
			else cnt += N - i;
			if (cnt < min) min = cnt;
		}
	}

	if (N > 100) {
		if (N - 100 < min) min = N - 100;
	}
	else {
		if (100 - N < min) min = 100 - N;
	}

	cout << min << endl;

	return 0;
}