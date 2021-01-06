#include <iostream>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	if(N==1){
		printf("1");
		return 0;
	}
	
	int start = 1;
	int term = 6;
	int cnt = 2;
	while(N>start+term){
		start += term;
		term += 6;
		cnt++;
	}
	
	printf("%d", cnt);
	
	return 0;
}