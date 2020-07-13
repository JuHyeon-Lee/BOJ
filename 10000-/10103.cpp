#include <cstdio>

int main() {

	int round;

	scanf("%d", &round);

	int score1 = 100;
	int score2 = 100;

	for (int i = 0; i < round; i++) {
		int num1;
		int num2;

		scanf("%d", &num1);
		scanf("%d", &num2);

		if (num1 > num2) {
			score2 -= num1;
		}
		else if (num1 < num2) {
			score1 -= num2;
		}

	}

	printf("%d\n", score1);
	printf("%d", score2);

	return 0;
}