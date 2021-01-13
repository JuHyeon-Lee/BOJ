#include <iostream>

using namespace std;

int main(){
	
	int T;
	scanf("%d", &T);
	
	while(T--){
		int x, y;
		scanf("%d%d", &x, &y);
		
		int dis = y - x;
		
		int time = 1;
		unsigned int min_dis = 1;
		while(true){
			if(min_dis>dis) break;
			time++;
			min_dis += time / 2;
		}
		
		printf("%d\n", time - 1);
	}
	
	return 0;
}