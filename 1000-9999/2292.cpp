#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	if (n == 1)
		cout << 1 << endl;
	else {
		int cnt = 0;
		int idx = 2;
		int num = (n - 2) / 6;
		if (num == 0) {
			cout << 2 << endl;
			return 0;
		}
		while (true) {
			if ((num > cnt) && (num <= cnt + idx)) {
				cout << idx + 1 << endl;
				break;
			}
			else {
				cnt += idx;
				idx++;
			}
		}
	}

	return 0;
}