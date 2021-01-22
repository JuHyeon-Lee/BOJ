#include <iostream>

using namespace std;

void hanoi(int N, int from, int by, int to){
	if (N == 1){
		printf("%d %d\n", from, to);
	} else {
		hanoi(N - 1, from, to, by);
		printf("%d %d\n", from, to);
		hanoi(N - 1, by, from, to);
	}
}

int main(){
	
	int N;
	scanf("%d", &N);
	
	printf("%d\n", (1 << N) - 1);
	hanoi(N, 1, 2, 3);
	
	return 0;
}