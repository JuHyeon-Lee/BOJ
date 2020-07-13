#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	int cnt = 0;
	int idx = 1;
	while (true) {
		if ((n > cnt) && (n <= cnt + idx)) {

			if (idx % 2 == 0)
				cout << n - cnt << "/" << idx - (n - cnt) + 1 << endl;
			else
				cout << idx - (n - cnt) + 1 << "/" << n - cnt << endl;

			break;
		}
		else {
			cnt += idx;
			idx++;
		}
	}

	return 0;
}