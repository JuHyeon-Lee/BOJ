#include <iostream>

using namespace std;

int main(){
	int N;
	scanf("%d", &N);
	
	int num = N;
	int cnt = 0;
	while(true){
		cnt++;
		num = (num%10*10) + ((num/10+num%10)%10);
		if(num==N) break;
	}
	printf("%d", cnt);
	
	return 0;
}