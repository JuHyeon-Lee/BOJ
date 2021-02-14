#include <iostream>

using namespace std;

int N;
int A[1000];
int dp[1000];

int main(){
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%d", &A[i]);
	}
	
	for(int i=0; i<N; i++){
		for(int j=i; j>=0; j--){
			if(A[j]<A[i]){
				if(dp[i]<dp[j]) dp[i] = dp[j];
			}
		}
		dp[i]++;
	}
	
	int max = 0;
	for(int i=0; i<N; i++){
		if(dp[i]>max) max = dp[i];
	}
	
	printf("%d\n", max);
	
	return 0;
}