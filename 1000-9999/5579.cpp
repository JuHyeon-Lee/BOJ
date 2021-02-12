#include <iostream>

using namespace std;

bool submit[30];

int main(){
	
	for(int i=0; i<28; i++){
		int id;
		scanf("%d", &id);
		submit[id-1] = true;
	}
	
	for(int i=0; i<30; i++){
		if(!submit[i]) printf("%d\n", i+1);
	}
	
	return 0;
}