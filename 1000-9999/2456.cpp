#include <iostream>

using namespace std;

int cand[3][4];
int sum[3];

int main(){
	
	int N;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		int score[3];
		scanf("%d%d%d", &score[0], &score[1], &score[2]);
		for(int j=0; j<3; j++){
			cand[j][score[j]]++;
			sum[j] += score[j];
		}
	}
	
	int maxScore = max(sum[0], max(sum[1], sum[2]));
	
	int winner = -1;
	int maxCnt3 = 0;
	int maxCnt2 = 0;
	for(int i=0; i<3; i++){
		if(maxScore==sum[i]){
			if(maxCnt3<cand[i][3]){
				winner = i;
				maxCnt3 = cand[i][3];
				maxCnt2 = cand[i][2];
			} else if(maxCnt3==cand[i][3]) {
				if(maxCnt2<cand[i][2]){
					winner = i;
					maxCnt3 = cand[i][3];
					maxCnt2 = cand[i][2];
				} else if(maxCnt2==cand[i][2]) {
					winner = -1;
				}
			}
		}
	}
	
	printf("%d %d\n", winner+1, maxScore);
	
	return 0;
}