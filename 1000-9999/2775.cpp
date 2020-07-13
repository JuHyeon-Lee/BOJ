#include <stdio.h>
#include <string>

using namespace std;

int main() {

	int num[15][15];

	for (int k = 0; k < 15; k++) {
		for (int n = 1; n < 15; n++) {
			if (k == 0) {
				num[k][n] = n;
				continue;
			}
			int sum = 0;
			for (int i = 1; i <= n; i++) {
				sum += num[k - 1][i];
			}
			num[k][n] = sum;
		}
	}

	int cnt;
	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++) {
		int k, n;
		scanf("%d%d", &k, &n);
		printf("%d\n", num[k][n]);
	}

	return 0;
}

