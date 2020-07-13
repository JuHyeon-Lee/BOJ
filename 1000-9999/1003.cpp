#include <iostream>

using namespace std;

int dp[42] = {1};

int main(){
	
	int T;
	scanf("%d", &T);
	
	for(int i=2; i<42; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	
	while(T--){
		int N;
		scanf("%d", &N);
		
		printf("%d %d\n", dp[N], dp[N+1]);
	}
	
	return 0;
}