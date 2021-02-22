#include <iostream>

using namespace std;

int main(){
	
	int L, A, B, C, D;
	scanf("%d%d%d%d%d", &L, &A, &B, &C, &D);
	
	printf("%d\n", L - max((A-1)/C+1, (B-1)/D+1));
	
	return 0;
}