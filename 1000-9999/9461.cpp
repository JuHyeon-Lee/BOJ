#include <iostream>

using namespace std;

long long dp[101];

long long pado(int n){
	if(dp[n]) return dp[n];
	return dp[n] = pado(n-1) + pado(n-5);
}

int main(){
	
	dp[1] = 1; dp[2] = 1; dp[3] = 1;
	dp[4] = 2; dp[5] = 2;
	
	int T;
	scanf("%d", &T);
	
	while(T--){
		int N;
		scanf("%d", &N);
		printf("%lld\n", pado(N));
	}
	
	return 0;
}