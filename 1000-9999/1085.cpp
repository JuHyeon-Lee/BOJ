#include <iostream>

using namespace std;

int main(){
	
	int x, y, w, h;
	scanf("%d%d%d%d", &x, &y, &w, &h);
	
	int min = x;
	if(y<min) min = y;
	if(w-x<min) min = w-x;
	if(h-y<min) min = h-y;
	
	printf("%d", min);
	
	return 0;
}