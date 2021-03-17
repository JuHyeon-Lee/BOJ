#include <iostream>

using namespace std;

int main(){
	
	int S, K, H;
	scanf("%d%d%d", &S, &K, &H);
	
	if(S+K+H>=100) printf("OK\n");
	else {
		if(S<K&&S<H) printf("Soongsil\n");
		if(K<S&&K<H) printf("Korea\n");
		if(H<K&&H<S) printf("Hanyang\n");
	}
	
	return 0;
}