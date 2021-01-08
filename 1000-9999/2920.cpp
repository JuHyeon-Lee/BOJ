#include <iostream>

using namespace std;

int main(){
	
	int first, last;
	scanf("%d%d", &first, &last);
	
	int diff = last - first;
	
	int cnt = 6;
	while(cnt--){
		int num;
		scanf("%d", &num);
		if(num-last != diff){
			diff = 0;
			break;
		}
		last = num;
	}
	
	switch(diff){
		case 1:
			printf("ascending");
			break;
		case 0:
			printf("mixed");
			break;
		case -1:
			printf("descending");
			break;
	}
	
	return 0;
}