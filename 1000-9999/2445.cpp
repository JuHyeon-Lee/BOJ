#include <iostream>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	for(int i=1; i<=N; i++){
		for(int j=0; j<i; j++){
			printf("*");
		}
		for(int j=0; j<(N-i)*2; j++){
			printf(" ");
		}
		for(int j=0; j<i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(int i=N-1; i>=1; i--){
		for(int j=0; j<i; j++){
			printf("*");
		}
		for(int j=0; j<(N-i)*2; j++){
			printf(" ");
		}
		for(int j=0; j<i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}