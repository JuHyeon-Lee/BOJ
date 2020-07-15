#include <iostream>

using namespace std;

int main(){
	
	long long n;
	scanf("%lld", &n);
	
	n %= 1000000 / 10 * 15;
	
	int a = 0;
	int b = 1;
	
	for(long long i=0; i<n; i++){
		int c = (a + b) % 1000000;
		
		a = b;
		b = c;
	}
	
	printf("%d\n", a);
	
	return 0;
}