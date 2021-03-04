#include <iostream>

using namespace std;

int main(){
	
	int A, B, C, D, P;
	scanf("%d%d%d%d%d", &A, &B, &C, &D, &P);
	
	int X = A * P;
	int Y = B;
	if(P > C) Y += (P - C) * D;
	
	printf("%d\n", min(X,Y));
	
	return 0;
}