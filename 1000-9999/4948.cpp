#include <iostream>

using namespace std;

#define MAX 246913

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
	
	init();
	
	while(true){
		int n;
		scanf("%d", &n);
		
		if(n == 0)
			break;
	
		int cnt = 0;
		for(int i=n+1; i<=n*2; i++){
			if(!isNotPrime[i])
				cnt++;
		}
		
		printf("%d\n", cnt);
	}
	
	return 0;
}