#include <iostream>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	printf("%d\n", (A+B)%C);
	printf("%d\n", ((A%C)+(B%C))%C);
	printf("%d\n", (A*B)%C);
	printf("%d\n", ((A%C)*(B%C))%C);
	
	return 0;
}