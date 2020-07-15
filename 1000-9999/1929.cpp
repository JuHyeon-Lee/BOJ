#include <iostream>

using namespace std;

#define MAX 1000001

bool isNotPrime[MAX];

void init(){
	isNotPrime[1] = true;
	for(int i=2; i<MAX; i++){
		if(isNotPrime[i])
			continue;
		
		for(int j=i*2; j<MAX; j+=i){
			isNotPrime[j] = true;
		}
	}
}

int main(){
	int M, N;
	scanf("%d%d", &M, &N);
	
	init();
	
	for(int i=M; i<=N; i++){
		if(!isNotPrime[i])
			printf("%d\n", i);
	}
	
	return 0;
}