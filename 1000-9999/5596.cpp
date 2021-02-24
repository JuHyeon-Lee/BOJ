#include <iostream>

using namespace std;

int main(){
	
	int A1, B1, C1, D1;
	int A2, B2, C2, D2;
	
	scanf("%d%d%d%d", &A1, &B1, &C1, &D1);
	scanf("%d%d%d%d", &A2, &B2, &C2, &D2);
	
	printf("%d\n", max(A1+B1+C1+D1, A2+B2+C2+D2));
	
	return 0;
}