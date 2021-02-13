#include <iostream>
#define MOD 1000000000

using namespace std;

int N;
int dp[101][10];

int main(){
	
	scanf("%d", &N);
	
	for(int i=1; i<10; i++){
		dp[1][i] = 1;
	}
	
	for(int i=2; i<=N; i++){
		for(int j=0; j<10; j++){
			if(j==0) dp[i][j] = dp[i-1][j+1];
			else if(j==9) dp[i][j] = dp[i-1][j-1];
			else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % MOD;
		}
	}
	
	long long sum = 0;
	
	for(int i=0; i<10; i++){
		sum += dp[N][i];
	}
	
	printf("%lld\n", sum % MOD);
	
	return 0;
}