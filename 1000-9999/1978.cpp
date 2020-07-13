#include <iostream>

using namespace std;

bool table[1001];

int main() {
	int N;
	cin >> N;

	table[1] = true;
	for (int i = 2; i <= 1000; i++) {
		int num = i;

		for (int j = 2; num*j <= 1000; j++) {
			if (table[num])
				continue;
			table[num*j] = true;
		}
	}

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		if (!table[num])
			cnt++;
	}

	cout << cnt << endl;

	return 0;
}