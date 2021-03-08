#include <iostream>

using namespace std;

int main(){
	
	int A, B, C, D;
	scanf("%d%d%d%d", &A, &B, &C, &D);
	
	printf("%d\n", min(A+D,B+C));
	
	return 0;
}