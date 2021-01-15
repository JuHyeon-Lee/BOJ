#include <iostream>

using namespace std;

int main(){
	
	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);
	
	int h = C/60;
	int m = C%60;
	
	B += m;
	if(B >= 60){
		B %= 60;
		h++;
	}
	
	A += h;
	if(A >= 24){
		A %= 24;
	}
	
	printf("%d %d\n", A, B);
	
	return 0;
}