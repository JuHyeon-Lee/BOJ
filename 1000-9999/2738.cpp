#include <iostream>

using namespace std;

int A[100][100];
int B[100][100];

int main(){
	
	int N, M;
	scanf("%d%d", &N, &M);
	
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			int num;
			scanf("%d", &num);
			A[i][j] += num;
		}
	}
	
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}