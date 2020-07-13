#include <iostream>

using namespace std;

bool han(int num) {
	if (num / 100 == 0) return true;

	int a, b, c;
	a = num / 100 % 10;
	b = num / 10 % 10;
	c = num % 10;

	if (num != 1000 && a - b == b - c) return true;
	else return false;
}

int main() {
	std::ios::sync_with_stdio(false);

	int N;
	cin >> N;

	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (han(i)) cnt++;
	}

	cout << cnt << endl;

	return 0;
}