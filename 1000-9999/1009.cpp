#include <iostream>

using namespace std;

int main(){
	
	int T;
	scanf("%d", &T);
	
	while(T--){
		int a, b;
		scanf("%d%d", &a, &b);
		
		int res = 1;
		while(b--){
			res *= a;
			res %= 10;
		}
		
		if(res==0) printf("10\n");
		else printf("%d\n", res);
	}
	
	return 0;
}