#include <iostream>

using namespace std;

int score[200][3];
int cnt[3][101];
int sum[200];

int main(){
	
	int total[3];
	
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &score[i][j]);
			cnt[j][score[i][j]]++;
		}
	}
	
	for(int i=0; i<N; i++){
		for(int j=0; j<3; j++){
			if(cnt[j][score[i][j]]==1) sum[i]+=score[i][j];
		}
	}
	
	for(int i=0; i<N; i++){
		printf("%d\n", sum[i]);
	}
	
	return 0;
}