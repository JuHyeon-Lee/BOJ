#include <cstdio>

int main() {

	int num;
	scanf("%d", &num);

	for (int i = 0; i < num - 1; i++) {
		printf(" ");
	}
	printf("*\n");

	int num2 = 1;

	if (num > 2) {
		for (int i = num; i > 2; i--) {
			for (int i2 = i - 2; i2 > 0; i2--) {
				printf(" ");
			}
			printf("*");
			for (int i2 = 0; i2 < num2 * 2 - 1; i2++) {
				printf(" ");
			}
			printf("*\n");
			num2++;
		}
	}


	if (num > 1) {
		for (int i = 0; i < num * 2 - 1; i++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}