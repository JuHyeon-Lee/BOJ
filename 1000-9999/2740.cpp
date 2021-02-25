#include <iostream>

using namespace std;

int N, M, K;
int matA[100][100];
int matB[100][100];
int matC[100][100];

int main(){
	
	scanf("%d%d", &N, &M);
	
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			scanf("%d", &matA[i][j]);
		}
	}
	
	scanf("%d%d", &M, &K);
	
	for(int i=0; i<M; i++){
		for(int j=0; j<K; j++){
			scanf("%d", &matB[i][j]);
		}
	}
	
	for(int i=0; i<N; i++){
		for(int j=0; j<K; j++){
			for(int k=0; k<M; k++){
				matC[i][j] += matA[i][k] * matB[k][j];
			}
		}
	}
	
	for(int i=0; i<N; i++){
		for(int j=0; j<K; j++){
			printf("%d ", matC[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}