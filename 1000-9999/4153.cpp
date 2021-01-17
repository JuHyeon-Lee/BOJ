#include <iostream>
#include <algorithm>

using namespace std;

#define SIZE 3

int main(){
	
	while(true){
		int num[SIZE];
		scanf("%d%d%d", &num[0], &num[1], &num[2]);
		
		if(num[0]==0 && num[1]==0 && num[2]==0) break;
		
		sort(num, num+SIZE);
		
		if(num[0]*num[0]+num[1]*num[1]==num[2]*num[2])
			printf("right\n");
		else
			printf("wrong\n");
		
	}
	
	return 0;
}