#include <cstdio>
#include <cstring>
using namespace std;

int main() {

	int cnt;
	int input[100] = { 0, };

	scanf("%d", &cnt);

	for (int i = 0; i < cnt; i++) {

		char str[60];

		scanf("%s", &str);

		int num = str[strlen(str) - 1] - 48;

		if (num % 2 == 1) {
			input[i] = 1;
		}
		else if (num % 2 == 0) {
			input[i] = 2;
		}

	}

	for (int i = 0; i < cnt; i++) {
		if (input[i] == 1) {
			printf("odd\n");
		}
		else if (input[i] == 2) {
			printf("even\n");
		}
	}


	return 0;
}