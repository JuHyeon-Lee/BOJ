#include <iostream>

using namespace std;

int main(){
	
	int div[42];
	for(int i=0; i<42; i++){
		div[i] = 0;
	}
	
	for(int i=0; i<10; i++){
		int num;
		scanf("%d", &num);
		
		div[num%42]++;
	}
	
	int cnt = 0;
	for(int i=0; i<42; i++){
		if(div[i]) cnt++;
	}
	
	printf("%d", cnt);
	
	return 0;
}