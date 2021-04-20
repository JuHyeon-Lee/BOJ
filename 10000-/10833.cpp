#include <iostream>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	int remain = 0;
	while(N--){
		int s, a;
		scanf("%d%d", &s, &a);
		remain += a % s;
	}
	
	printf("%d\n", remain);
	
	return 0;
}