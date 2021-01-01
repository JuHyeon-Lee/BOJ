#include <iostream>

using namespace std;

int main(){
	
	int max = 0;
	int max_idx = 0;
	for(int i=1; i<=9; i++){
		int num;
		scanf("%d", &num);
		if(num>max){
			max = num;
			max_idx = i;
		}
	}
	
	printf("%d\n%d", max, max_idx);
	
	return 0;
}