#include <iostream>

using namespace std;

int main(){
	
	int max_idx = 0;
	int max_score = 0;
	
	for(int i=1; i<=5; i++){
		int sum = 0;
		for(int j=0; j<4; j++){
			int score;
			scanf("%d", &score);
			sum += score;
		}
		if(sum > max_score){
			max_idx = i;
			max_score = sum;
		}
	}
	
	printf("%d %d\n", max_idx, max_score);
	
	return 0;
}