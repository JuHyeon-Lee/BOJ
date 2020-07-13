#include <iostream>

using namespace std;

bool table[1000001];

int main() {

	table[1] = true;
	for (int i = 2; i*i < 1000000; i++) {
		if (table[i])
			continue;
		for (int j = i*2; j <= 1000000; j+=i) {
			table[j] = true;
		}
	}

	while (true) {
		int n;
		scanf("%d", &n);
		if (n == 0) break;

		bool found = false;
		for (int i = 3; i <= n/2; i+=2) {
			if (!table[i] && !table[n - i]) {
				printf("%d = %d + %d\n", n, i, n - i);
				found = true;
				break;
			}
		}

		if (!found)
			printf("Goldbach's conjecture is wrong.");
	}

	return 0;
}