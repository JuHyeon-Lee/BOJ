#include <iostream>

using namespace std;

int main(){
	
	int M;
	scanf("%d", &M);
	
	bool cup[3] = {1, 0, 0};
	
	while(M--){
		int X, Y;
		scanf("%d%d", &X, &Y);
		
		int tmp = cup[X-1];
		cup[X-1] = cup[Y-1];
		cup[Y-1] = tmp;
	}
	
	for(int i=0; i<3; i++){
		if(cup[i]) printf("%d\n", i+1);
	}
	
	return 0;
}