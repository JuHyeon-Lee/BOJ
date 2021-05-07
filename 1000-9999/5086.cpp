#include <iostream>

using namespace std;

int main(){
	
	while(true){
		int A, B;
		scanf("%d%d", &A, &B);
		
		if(!A&&!B) break;
		
		if(B%A==0) printf("factor\n");
		else if(A%B==0) printf("multiple\n");
		else printf("neither\n");
	}
	
	return 0;
}