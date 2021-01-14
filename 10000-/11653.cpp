#include <iostream>

using namespace std;

#define MAX 10000001
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
	
	int N;
	scanf("%d", &N);
	
	for(int i=2; i<=N; i++){
		if(N==1) break;
		while(!prime[i] && N%i==0){
			printf("%d\n", i);
			N /= i;
		}
	}
	
	return 0;
}