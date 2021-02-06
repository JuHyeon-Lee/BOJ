#include <iostream>

using namespace std;

int N;
int dp[1000001];

int main(){
	
	scanf("%d", &N);
	
	for(int i=0; i<1000001; i++){
		dp[i] = 99999999;
	}
	dp[N] = 0;
	
	for(int i=N-1; i>0; i--){
		dp[i] = dp[i+1] + 1;
		if(i*2<=N) dp[i] = min(dp[i], dp[i*2] + 1);
		if(i*3<=N) dp[i] = min(dp[i], dp[i*3] + 1);
	}
	
	printf("%d\n", dp[1]);
	
	return 0;
}