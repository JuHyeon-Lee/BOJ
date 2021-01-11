#include <iostream>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	for(int i=N; i>=1; i--){
		for(int j=0; j<N-i; j++){
			printf(" ");
		}
		for(int j=0; j<i; j++){
			printf("*");
		}
		for(int j=0; j<i-1; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}