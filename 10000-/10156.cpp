#include <iostream>

using namespace std;

int main(){
	
	int K, N, M;
	scanf("%d%d%d", &K, &N, &M);
	
	int need = (K * N) - M;
	if(need < 0) need = 0;
	
	printf("%d\n", need);
	
	return 0;
}