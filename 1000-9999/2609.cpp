#include <iostream>

using namespace std;

int gcd(int a, int b){
	while(b!=0){
		int c = a%b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b){
	return (a * b) / gcd(a, b);
}

int main(){
	
	int A, B;
	scanf("%d%d", &A, &B);
	printf("%d\n%d\n", gcd(A, B), lcm(A, B));
	
	return 0;
}