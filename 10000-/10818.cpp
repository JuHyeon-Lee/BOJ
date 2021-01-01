#include <iostream>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);

	int min = 1000001;
	int max = -1000001;
	while(N--){
		int num;
		scanf("%d", &num);
		if(num>max) max = num;
		if(num<min) min = num;
	}
	
	printf("%d %d", min, max);
	
	return 0;
}