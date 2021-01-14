#include <iostream>

using namespace std;

#define MAX 10001
bool prime[MAX];

void initPrime(){
	prime[1] = true;
	for(int i=2; i<MAX; i++){
		if(prime[i]) continue;
		int num = i + i;
		while(num<MAX){
			prime[num] = true;
			num += i;
		}
	}
}

int main(){
	
	initPrime();
	
	int M, N;
	scanf("%d%d", &M, &N);
	
	int sum = 0;
	int min = 0;
	for(int i=M; i<=N; i++){
		if(!prime[i]){
			if(min==0) min = i;
			sum += i;
		}
	}
	
	if(min==0){
		printf("-1\n");
		return 0;
	}
	
	printf("%d\n%d\n", sum, min);
	
	return 0;
}