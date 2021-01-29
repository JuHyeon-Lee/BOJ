#include <iostream>

using namespace std;

int main(){
	
	int N = 5;
	
	int sum = 0;
	while(N--){
		int num;
		scanf("%d", &num);
		sum += num;
	}
	
	printf("%d", sum);
	
	return 0;
}