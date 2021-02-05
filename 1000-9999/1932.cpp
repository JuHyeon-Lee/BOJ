#include <iostream>

using namespace std;

int N;
int tri[500][500];

void solve(){
	for(int i=1; i<N; i++){
		for(int j=0; j<=i; j++){
			if(j==0) tri[i][j] += tri[i-1][j];
			else if(j==i) tri[i][j] += tri[i-1][j-1];
			else tri[i][j] += max(tri[i-1][j-1], tri[i-1][j]);
		}
	}
}

int main(){
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		for(int j=0; j<=i; j++){
			scanf("%d", &tri[i][j]);
		}
	}
	
	solve();
	
	int max = 0;
	for(int i=0; i<N; i++){
		if(tri[N-1][i] > max) max = tri[N-1][i];
	}
	
	printf("%d\n", max);
	
	return 0;
}