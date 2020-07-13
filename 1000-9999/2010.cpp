#include <iostream>

using namespace std;

int main() {
	std::ios::sync_with_stdio(0);

	int N;
	cin >> N;

	int sum = 0;
	while (N--) {
		int cnt;
		cin >> cnt;
		sum += cnt - 1;
	}

	cout << sum + 1 << endl;

	return 0;
}