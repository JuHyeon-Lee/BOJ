#include <iostream>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	int sum = 0;
	while(N--){
		int num;
		scanf("%d", &num);
		sum += num - 1;
	}
	
	printf("%d\n", sum + 1);
	
	return 0;
}