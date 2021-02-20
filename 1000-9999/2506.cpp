#include <iostream>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	int sum = 0;
	int cur = 0;
	for(int i=0; i<N; i++){
		int score;
		scanf("%d", &score);
		if(score) cur++;
		else cur = 0;
		sum += cur;
	}
	
	printf("%d\n", sum);
	
	return 0;
}