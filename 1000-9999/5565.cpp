#include <iostream>

using namespace std;

int main(){
	
	int sum;
	scanf("%d", &sum);
	
	for(int i=0; i<9; i++){
		int num;
		scanf("%d", &num);
		sum -= num;
	}
	
	printf("%d\n", sum);
	
	return 0;
}