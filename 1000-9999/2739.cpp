#include <iostream>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int N;
	scanf("%d", &N);
	
	for(int i=1; i<=9; i++){
		printf("%d * %d = %d\n", N, i, N*i);
	}
	
	return 0;
}