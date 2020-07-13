#include <stdio.h>
#include <string>

using namespace std;

int main() {

	string day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int max[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int first[13];

	int x, y;
	scanf("%d%d", &x, &y);

	// 매월 시작 요일 초기화
	first[1] = 1;
	for (int i = 1; i < 12; i++) {
		first[i + 1] = (first[i] + max[i]) % 7;
	}

	printf("%s\n", day[(first[x] + y - 1) % 7].c_str());


	return 0;
}

