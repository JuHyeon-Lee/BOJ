#include <iostream>
#include <vector>

using namespace std;

int main() {
	std::ios::sync_with_stdio(0);

	int T;
	cin >> T;
	while (T--) {

		int l, n;
		cin >> l >> n;

		int min = 0;
		int max = 0;

		for (int i = 0; i < n; i++) {
			int loc = 0;
			cin >> loc;

			if (loc > l - loc) {
				if (max < loc) max = loc;
				if (min < l - loc) min = l - loc;
			}
			else {
				if (max < l - loc) max = l - loc;
				if (min < loc) min = loc;
			}
		}

		cout << min << " " << max << endl;

	}

	return 0;
}