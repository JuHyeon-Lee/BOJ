#include <iostream>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);
	
	int x, y;
	scanf("%d%d", &x, &y);
	
	if(x>0){
		if(y>0) printf("1");
		if(y<0) printf("4");
	} else {
		if(y>0) printf("2");
		if(y<0) printf("3");
	}
	
	return 0;
}