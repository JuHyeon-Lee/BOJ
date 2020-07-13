#include <cstdio>
#include <stdlib.h>

int comparisonFunctionInt(const void *a, const void *b) {

	if (*(int*)a <  *(int*)b) return -1;
	if (*(int*)a == *(int*)b) return  0;

	return 1;
}

int main() {

	int height[9];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &height[i]);
	}

	int sum = 0;
	for (int i = 0; i < 9; i++) {
		sum += height[i];
	}

	int more = sum - 100;

	int liar1 = 0;
	int liar2 = 0;

	for (int i = 0; i < 8; i++) {
		for (int i2 = i + 1; i2 < 9; i2++) {
			if (more == height[i] + height[i2]) {
				liar1 = i;
				liar2 = i2;

				break;
			}
		}
	}

	height[liar1] = 0;
	height[liar2] = 0;

	qsort((void *)height, 9, sizeof(height[0]), comparisonFunctionInt);

	for (int i = 2; i < 9; i++) {
		printf("%d\n", height[i]);
	}

	return 0;
}

