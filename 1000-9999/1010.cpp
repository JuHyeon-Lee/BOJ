#include <iostream>

using namespace std;

int dp[31][31];

int comb(int p, int q){
	if(dp[p][q]) return dp[p][q];
	if(p==q || q==0) return 1;
	return dp[p][q] = comb(p-1, q) + comb(p-1, q-1);
}

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	int T;
	cin >> T;
	
	while(T--){
		int N, M;
		cin >> N >> M;
		cout << comb(M, N) << "\n";
	}
	
	return 0;
}