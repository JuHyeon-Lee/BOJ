#include <iostream>

using namespace std;

int main(){
	
	int M, N;
	scanf("%d%d", &M, &N);
	
	int min = 10000;
	int sum = 0;
	for(int i=1; i<=100; i++){
		int sq = i * i;
		if(sq>=M && sq<=N){
			if(sq<min) min = sq;
			sum += sq;
		}
	}
	
	if(sum==0) printf("-1");
	else printf("%d\n%d\n", sum, min);
	
	return 0;
}