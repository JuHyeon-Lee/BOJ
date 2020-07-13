#include <cstdio>

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= 1000000; i++) {
		int num = (i / 1000000 % 10) + (i / 100000 % 10) + (i / 10000 % 10) + (i / 1000 % 10) + (i / 100 % 10) + (i / 10 % 10) + (i % 10) + i;
		if (i >= n) {
			printf("0");
			return 0;
		}
		else if (num == n) {
			printf("%d", i);
			return 0;
		}
	}

	return 0;
}