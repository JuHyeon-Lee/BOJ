#include <cstdio>

int main() {

	int input = 0;
	scanf("%d", &input);

	char arr[12] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L' };
	int arr2 = 0;

	if (input > 1984) {
		input -= 1984;
		printf("%c", arr[input % 12]);
		printf("%d", input % 10);
	}
	else if (input < 1984) {
		input = 1983 - input;
		printf("%c", arr[11 - (input % 12)]);
		printf("%d", 9 - (input % 10));
	}
	else {
		printf("A0");
	}

	return 0;
}