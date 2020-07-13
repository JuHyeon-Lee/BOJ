#include <stdio.h>

int main()
{
	int n;

	int count = 0;

	scanf("%d", &n);
	int temp = n;

	do {
		int b = n - ((n / 10) * 10);
		int f = n - b;

		int c = b + f / 10;
		c = c - ((c / 10) * 10);

		n = (10 * b) + c;
		count++;
	} while (temp != n);

	printf("%d", count);
	return 0;
}