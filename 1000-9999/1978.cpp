#include <iostream>
#include <vector>

using namespace std;

#define MAX 1001
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
	
	int cnt = 0;
	while(N--){
		int num;
		scanf("%d", &num);
		if(!prime[num]) cnt++;
	}
	
	printf("%d\n", cnt);
	
	return 0;
}