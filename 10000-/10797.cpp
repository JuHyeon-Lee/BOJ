#include <iostream>

using namespace std;

int main(){
	
	int day;
	scanf("%d", &day);
	
	int car[5];
	scanf("%d%d%d%d%d", &car[0], &car[1], &car[2], &car[3], &car[4]);
	
	int cnt = 0;
	for(int i=0; i<5; i++){
		if(car[i]==day) cnt++;
	}
	
	printf("%d", cnt);
	
	return 0;
}