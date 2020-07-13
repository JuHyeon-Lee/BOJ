#include <cstdio>

int main() {

	int num;
	scanf("%d", &num);

	int pA = 0;
	int pB = 0;

	char score[15];
	scanf("%s", &score);

	for (int i = 0; i < num; i++) {
		if (score[i] == 'A') {
			pA++;
		}
		else if (score[i] == 'B') {
			pB++;
		}
	}

	if (pA > pB) {
		printf("A");
	}
	else if (pA < pB) {
		printf("B");
	}
	else if (pA == pB) {
		printf("Tie");
	}

	return 0;
}