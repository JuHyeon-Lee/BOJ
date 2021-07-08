#include <iostream>

using namespace std;

int dp[1001][1001];

int bino(int n, int k){
	if(dp[n][k]) return dp[n][k];
	if(n==k || k==0) return 1;
	return dp[n][k] = (bino(n-1, k) + bino(n-1, k-1)) % 10007;
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int N, K;
	cin >> N >> K;
	
	cout << bino(N, K) << "\n";
	
	return 0;
}