#include <iostream>

using namespace std;

int main(){
	
	while(true){
		int A, B;
		scanf("%d%d", &A, &B);
		
		if(A==0 && B==0) break;
		
		if(A>B) printf("Yes\n");
		else printf("No\n");
	}
	
	return 0;
}