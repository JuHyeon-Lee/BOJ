#include <iostream>

using namespace std;

int main(){
	
	int T = 3;
	while(T--){
		int num[4];
		scanf("%d%d%d%d", &num[0], &num[1], &num[2], &num[3]);
		
		int cnt = 0;
		for(int i=0; i<4; i++){
			if(!num[i]) cnt++;
		}
		
		switch(cnt){
			case 0:
				printf("E\n");
				break;
			case 1:
				printf("A\n");
				break;
			case 2:
				printf("B\n");
				break;
			case 3:
				printf("C\n");
				break;
			case 4:
				printf("D\n");
				break;
		}
	}
	
	return 0;
}