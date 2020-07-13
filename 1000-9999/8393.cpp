#include <stdio.h>
main() {
	int sum = 0, a[10] = { 0 }, n, i;
	scanf("%d", &n);
	for (i = 0; i<n; i++) {
		a[i] = i + 1;
		sum = sum + a[i];
	}
	printf("%d", sum);
}