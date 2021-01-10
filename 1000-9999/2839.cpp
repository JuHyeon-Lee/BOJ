#include <iostream>

using namespace std;

int dp[5001];

int main(){
	
	for(int i=0; i<5001; i++){
		dp[i] = -1;
	}
	
	dp[3] = 1;
	dp[5] = 1;
	
	for(int i=6; i<5001; i++){
		if(dp[i-3]!=-1) dp[i] = dp[i-3] + 1;
		if(dp[i-5]!=-1){
			if(dp[i]==-1) dp[i] = dp[i-5] + 1;
			else if(dp[i-5]<dp[i]-1) dp[i] = dp[i-5] + 1;
		}
	}
	
	int N;
	scanf("%d", &N);
	printf("%d", dp[N]);
	
	return 0;
}