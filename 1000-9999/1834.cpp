#include <iostream>

using namespace std;

int main(){
	
	long long N;
	scanf("%lld", &N);
	
	long long sum = 0;
	for(long long i=1; i<N; i++){
		sum += N * i + i;
	}
	
	printf("%lld\n", sum);
	
	return 0;
}