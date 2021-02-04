#include <iostream>

using namespace std;

int N;
int dp[1000001];

int fib(int n){
	if(dp[n]) return dp[n];
	return dp[n] = (fib(n-1) + fib(n-2)) % 15746;
}

int main(){
	
	dp[1] = 1; dp[2] = 2;
	
	scanf("%d", &N);
	
	printf("%d\n", fib(N));
	
	return 0;
}