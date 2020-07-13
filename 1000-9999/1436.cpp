#include <iostream>
#include <string>

using namespace std;

bool isDevil(long long n) {

	string s = to_string(n);
	int cnt = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '6') cnt++;
		else cnt = 0;
		if (cnt == 3) return true;
	}

	return false;
}

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int cnt = 0;
	long long i = 0;
	while (cnt != N) {
		i++;
		if (isDevil(i)) cnt++;
	}
	cout << i << endl;

	return 0;
}