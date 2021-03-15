#include <iostream>

using namespace std;

int main(){
	
	int M, D;
	scanf("%d%d", &M, &D);
	
	if(M==2){
		if(D<18) printf("Before");
		if(D==18) printf("Special");
		if(D>18) printf("After");
	}
	if(M<2) printf("Before");
	if(M>2) printf("After");
	
	return 0;
}