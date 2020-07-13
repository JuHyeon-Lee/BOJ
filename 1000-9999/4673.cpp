#include <iostream>
#include <string>

using namespace std;

int selfnum[10001];

int d(int n) {
	string s = to_string(n);
	for (int i = 0; i < s.length(); i++) {
		n += s[i] - 48;
	}
	return n;
}

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	for (int i = 1; i < 10001; i++) {
		if (d(i) <= 10000) selfnum[d(i)] = i;
	}

	for (int i = 1; i < 10001; i++) {
		if (selfnum[i] == 0) cout << i << endl;
	}

	return 0;
}