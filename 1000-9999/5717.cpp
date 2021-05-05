#include <iostream>

using namespace std;

int main(){
	
	while(true){
		int M, F;
		scanf("%d%d", &M, &F);
		
		if(!M&&!F) break;
		
		printf("%d\n", M+F);
	}
	
	return 0;
}