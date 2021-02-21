#include <iostream>

using namespace std;

int main(){
	
	int T;
	scanf("%d", &T);
	
	while(T--){
		int N;
		scanf("%d", &N);
		
		int sum = 0;
		while(N--){
			int num;
			scanf("%d", &num);
			sum += num;
		}
		
		printf("%d\n", sum);
	}
	
	return 0;
}