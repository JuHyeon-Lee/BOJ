#include <iostream>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int A, B;
	scanf("%d%d", &A, &B);
	
	if(A>B) printf(">");
	if(A<B) printf("<");
	if(A==B) printf("==");
	
	return 0;
}