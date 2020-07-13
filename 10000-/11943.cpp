#include <cstdio>

int main() {

	int appleA = 0;
	int orangeA = 0;
	int appleB = 0;
	int orangeB = 0;

	scanf("%d", &appleA);
	scanf("%d", &orangeA);
	scanf("%d", &appleB);
	scanf("%d", &orangeB);

	int count1 = 0;

	count1 += appleA;
	count1 += orangeB;

	int count2 = 0;

	count2 += orangeA;
	count2 += appleB;

	if (count1 > count2) {
		printf("%d", count2);
	}
	else {
		printf("%d", count1);
	}

	return 0;
}