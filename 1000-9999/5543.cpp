#include <iostream>

using namespace std;

int main(){
	
	int burger[3];
	int drink[2];
	
	scanf("%d%d%d%d%d", &burger[0], &burger[1], &burger[2], &drink[0], &drink[1]);
	
	int min = 4000;
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			int price = burger[i] + drink[j] - 50;
			if(price < min) min = price;
		}
	}
	
	printf("%d", min);
	
	return 0;
}