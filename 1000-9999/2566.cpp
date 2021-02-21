#include <iostream>

using namespace std;

int main(){
	
	int x, y;
	int max = 0;
	
	for(int i=1; i<=9; i++){
		for(int j=1; j<=9; j++){
			int num;
			scanf("%d", &num);
			if(num > max){
				max = num;
				x = i; y = j;
			}
		}
	}
	
	printf("%d\n%d %d\n", max, x, y);
	
	return 0;
}