#include <iostream>

using namespace std;

#define MAX 1000001
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
	
	for(int i=M; i<=N; i++){
		if(!prime[i]) printf("%d\n", i);
	}
	
	return 0;
}