#include <iostream>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	int row = N/2 + 1;
	int col = N - N/2 + 1;
	
	printf("%d\n", row * col);
	
	return 0;
}