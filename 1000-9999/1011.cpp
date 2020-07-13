#include <iostream>
#include <stdio.h>

using namespace std;

long long getMin(long long tmp);

int main() {

	int total;
	scanf("%d", &total);

	for (int a = 0; a < total; a++) {

		long long x, y;
		scanf("%lld%lld", &x, &y);

		long long n = y - x;

		long long cnt = 0;
		long long path = 0;
		while (true) {

			if ((n >= cnt*cnt) && (n < (cnt + 1)*(cnt + 1))) {
				// min cnt = 2n-1
				path = cnt * 2 - 1;

				long long tmp = n - getMin(cnt);
				for (long long i = cnt; i > 0; i--) {
					if (tmp == 0)
						break;
					path += tmp / i;
					tmp = tmp%i;
				}

				printf("%lld\n", path);
				break;
			}
			else
				cnt++;
		}

	}

	return 0;
}

long long getMin(long long tmp) {
	long long sum = 0;
	if (tmp == 1)
		return 1;
	for (long long i = tmp - 1; i > 0; i--) {
		sum += i * 2;
	}
	sum += tmp;
	return sum;
}