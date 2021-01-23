#include <iostream>

using namespace std;

int gen(int n){
	int sum = 0;
	
	int div = 1;
	while(n>=div){
		int digit = n / div % 10;
		sum += digit;
		div*=10;
	}
	
	return sum + n;
}

int main(){
	
	int N;
	scanf("%d", &N);
	
	int con = 0;
	for(int i=1; i<=N; i++){
		if(gen(i)==N){
			con = i;
			break;
		}
	}
	
	printf("%d\n", con);
	
	return 0;
}