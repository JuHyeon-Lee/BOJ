#include <iostream>

using namespace std;

int fact(int n){
	if(n==0) return 1;
	return n * fact(n-1);
}

int main(){
	
	int N;
	scanf("%d", &N);
	printf("%d\n", fact(N));
	
	return 0;
}