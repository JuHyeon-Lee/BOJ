#include <iostream>

int main() {

	int N;
	scanf("%d", &N);

	int ans = 0;
	int i = 1;

	while (i <= N) {
		ans += (N - i + 1);
		i *= 10;
	}

	printf("%d\n", ans);

	return 0;
}