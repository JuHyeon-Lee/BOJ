#include <iostream>

using namespace std;

int n;
int glass[10001];
int dp[10001];

int main(){
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &glass[i]);
	}
	
	dp[0] = glass[0];
	dp[1] = glass[0] + glass[1];
	
	for(int i=2; i<n; i++){
		dp[i] = max(dp[i-3] + glass[i-1], dp[i-2]) + glass[i];
		dp[i] = max(dp[i], dp[i-1]);
	}
	
	printf("%d\n", max(dp[n-1], dp[n-2]));
	
	return 0;
}