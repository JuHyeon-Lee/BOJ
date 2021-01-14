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
	
	while(true){
		int N;
		scanf("%d", &N);
		if(N==0) break;
		
		int cnt = 0;
		for(int i=N+1; i<=N*2; i++){
			if(!prime[i]) cnt++;
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}