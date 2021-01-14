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
	
	int T;
	scanf("%d", &T);
	
	while(T--){
		int n;
		scanf("%d", &n);
		
		int prime1, prime2;
		for(int i=2; i<=n/2; i++){
			if(!prime[i] && !prime[n-i]){
				prime1 = i;
				prime2 = n-i;
			}
		}
		
		printf("%d %d\n", prime1, prime2);
	}
	
	return 0;
}