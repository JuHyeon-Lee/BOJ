#include <stdio.h>

int main() {

	int N;
	scanf("%d", &N);
	int a, b = N;
	for (a = N; N > 0; b = N) {
		while (a - b > 0) {
			printf(" ");
			b++;
		}
		b = N;
		while (b > 0) {
			printf("*");
			b--;
		}
		printf("\n");
		N--;
	}
	return 0;

}