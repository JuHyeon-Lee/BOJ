#include <iostream>

using namespace std;

int N, B, C;
int cnt[1000000];

int main(){
	
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &cnt[i]);
	}
	
	scanf("%d%d", &B, &C);
	
	long long sum = N;
	for(int i=0; i<N; i++){
		cnt[i] -= B;
		if(cnt[i]>0){
			sum += cnt[i]/C;
			if(cnt[i]%C) sum += 1;
		}
	}
	
	printf("%lld\n", sum);
	
	return 0;
}