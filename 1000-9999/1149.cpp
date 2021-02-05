#include <iostream>

using namespace std;

int N;
int cost[1000][3];

void solve(){
	for(int i=1; i<N; i++){
		cost[i][0] += min(cost[i-1][1], cost[i-1][2]);
		cost[i][1] += min(cost[i-1][0], cost[i-1][2]);
		cost[i][2] += min(cost[i-1][0], cost[i-1][1]);
	}
}

int main(){
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%d%d%d", &cost[i][0], &cost[i][1], &cost[i][2]);
	}
	
	solve();
	
	printf("%d\n", min(cost[N-1][0], min(cost[N-1][1], cost[N-1][2])));
	
	return 0;
}