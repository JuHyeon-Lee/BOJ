#include <iostream>

using namespace std;

int main(){
	
	int S, D;
	scanf("%d%d", &S, &D);
	
	if((S-D)%2==1 || S<D) printf("-1\n");
	else printf("%d %d\n", (S-D)/2+D, (S-D)/2);
	
	return 0;
}