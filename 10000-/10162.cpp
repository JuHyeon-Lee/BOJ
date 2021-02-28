#include <iostream>

using namespace std;

int main(){
	
	int T;
	scanf("%d", &T);
	
	int A = T / 300;
	T %= 300;
	
	int B = T / 60;
	T %= 60;
	
	int C = T / 10;
	T %= 10;
	
	if(T!=0) printf("-1\n");
	else printf("%d %d %d\n", A, B, C);
	
	return 0;
}