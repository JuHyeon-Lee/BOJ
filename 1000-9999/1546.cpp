#include <iostream>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	float scores[1000];
	
	float max = 0;
	for(int i=0; i<N; i++){
		float score;
		scanf("%f", &score);
		scores[i] = score;
		if(score>max) max=score;
	}
	
	float sum = 0;
	for(int i=0; i<N; i++){
		sum += scores[i]/max*100;
	}
	
	printf("%.4f", sum/N);
	
	return 0;
}