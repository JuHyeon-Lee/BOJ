#include <iostream>

using namespace std;

int num[42];

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < 10; i++) {
		int n;
		cin >> n;
		num[n % 42]++;
	}

	int cnt = 0;
	for (int i = 0; i < 42; i++) {
		if (num[i] != 0) cnt++;
	}

	cout << cnt << endl;

	return 0;
}