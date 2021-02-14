#include <iostream>

using namespace std;

int N;
int A[1000];
int dp_inc[1000];
int dp_dec[1000];

int main(){
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%d", &A[i]);
	}
	
	for(int i=0; i<N; i++){
		for(int j=i; j>=0; j--){
			if(A[j]<A[i] && dp_inc[i]<dp_inc[j]){
				dp_inc[i] = dp_inc[j];
			}
		}
		dp_inc[i]++;
	}
	
	for(int i=N-1; i>=0; i--){
		for(int j=i; j<N; j++){
			if(A[j]<A[i] && dp_dec[i]<dp_dec[j]){
				dp_dec[i] = dp_dec[j];
			}
		}
		dp_dec[i]++;
	}
	
	int max = 0;
	for(int i=0; i<N; i++){
		int sum = dp_inc[i] + dp_dec[i] - 1;
		if(sum>max) max = sum;
	}
	
	printf("%d\n", max);
	
	return 0;
}