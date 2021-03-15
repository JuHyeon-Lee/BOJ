#include <iostream>

using namespace std;

int main(){
	
	int A, B, C, D, E, F;
	scanf("%d%d%d%d%d%d", &A, &B, &C, &D, &E, &F);
	
	printf("%d", A+B+C+D-min(min(A,B),min(C,D))+max(E,F));
	
	return 0;
}