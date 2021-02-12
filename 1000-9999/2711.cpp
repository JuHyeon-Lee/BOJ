#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	int T;
	scanf("%d", &T);
	
	while(T--){
		int loc;
		char str[81];
		scanf("%d%s", &loc, str);
		
		for(int i=0; i<strlen(str); i++){
			if(i!=loc-1) printf("%c", str[i]);
		}
		printf("\n");
	}
	
	return 0;
}