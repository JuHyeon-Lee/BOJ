#include <iostream>

using namespace std;

int main(){
	
	long N, M;
	scanf("%ld%ld", &N, &M);
	long diff = N - M;
	if(diff<0) diff *= -1;
	printf("%ld", diff);
	
	return 0;
}