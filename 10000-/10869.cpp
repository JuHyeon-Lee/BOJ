#include <iostream>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int A, B;
	scanf("%d%d", &A, &B);
	printf("%d\n", A+B);
	printf("%d\n", A-B);
	printf("%d\n", A*B);
	printf("%d\n", A/B);
	printf("%d\n", A%B);
	
	return 0;
}