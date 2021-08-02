#include <iostream>

using namespace std;

int dp[31][31];

int pascal(int n, int k){
	if(k==0 || k==n) return 1;
	if(dp[n][k]) return dp[n][k];
	return dp[n][k] = pascal(n-1, k-1) + pascal(n-1, k);
}

int main(){
	
	int n, k;
	cin >> n >> k;
	cout << pascal(n-1, k-1) << endl;
	
	return 0;
}