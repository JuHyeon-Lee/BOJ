#include <iostream>

using namespace std;

int main(){
	
	int n;
	scanf("%d", &n);
	
	int a = 0;
	int b = 1;
	
	for(int i=0; i<n; i++){
		int c = a + b;
		a = b;
		b = c;
	}
	
	printf("%d\n", a);
	
	return 0;
}