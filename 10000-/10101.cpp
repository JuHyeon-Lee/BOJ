#include <iostream>

using namespace std;

int main(){
	
	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	
	if(A+B+C == 180){
		if(A==B && B==C) printf("Equilateral\n");
		else if (A==B || B==C || C==A) printf("Isosceles\n");
		else printf("Scalene\n");
	} else {
		printf("Error\n");
	}
	
	return 0;
}