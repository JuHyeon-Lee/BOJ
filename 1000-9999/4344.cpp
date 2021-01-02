#include <iostream>

using namespace std;

int main(){
	
	int C;
	scanf("%d", &C);
	
	while(C--){
		int N;
		scanf("%d", &N);
		
		int scores[1000];
		float sum = 0;
		for(int i=0; i<N; i++){
			int score;
			scanf("%d", &score);
			scores[i] = score;
			sum += score;
		}
		
		float average = sum / N;
		
		float cnt = 0;
		for(int i=0; i<N; i++){
			if(scores[i]>average) cnt+=1;
		}
		
		printf("%.3f%%\n", cnt/N*100);
	}
	
	return 0;
}