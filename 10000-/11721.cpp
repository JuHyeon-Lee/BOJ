#include <cstdio>
#include <cstring>

int main() {
	char str[100];
	scanf("%s", str);

	int len = strlen(str);
	for (int i = 0; i <= len / 10; ++i) {
		int j = 0;
		while (str[i * 10 + j] != '\0' && j < 10) {
			printf("%c", str[i * 10 + j]);
			j++;
		}
		printf("\n");
	}

	return 0;
}