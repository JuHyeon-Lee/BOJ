#include <iostream>

using namespace std;

int main(){
	
	int A, B, C, D;
	scanf("%d%d%d%d", &A, &B, &C, &D);
	
	C += D % 60;
	B += D / 60 % 60;
	A += D / 60 / 60;
	
	if(C >= 60){
		C -= 60;
		B += 1;
	}
	
	if(B >= 60){
		B -= 60;
		A += 1;
	}
	
	if(A >= 24){
		A %= 24;
	}
	
	printf("%d %d %d\n", A, B, C);
	
	return 0;
}