#include <iostream>

using namespace std;

int dp[42];

int fib(int n){
	if(n==0||n==2) return 1;
	if(n==1) return 0;
	if(dp[n]) return dp[n];
	else return dp[n] = fib(n-1) + fib(n-2);
}

int main(){
	
	int T;
	scanf("%d", &T);
	
	while(T--){
		int N;
		scanf("%d", &N);
		printf("%d %d\n", fib(N), fib(N+1));
	}
	
	return 0;
}