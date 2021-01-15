#include <iostream>

using namespace std;

int x, y;

int main(){
	
	int pair = 3;
	while(pair--){
		int a, b;
		scanf("%d%d", &a, &b);
		x^=a;
		y^=b;
	}
	
	printf("%d %d\n", x, y);
	
	return 0;
}