#include <iostream>

using namespace std;

int main(){
	
	int X;
	scanf("%d", &X);
	
	int cnt = 1;
	while(cnt<X){
		X -= cnt;
		cnt++;
	}
	
	if(cnt%2==1) printf("%d/%d", cnt-(X-1), X);
	else printf("%d/%d", X, cnt-(X-1));
	
	return 0;
}