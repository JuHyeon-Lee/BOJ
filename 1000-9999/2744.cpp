#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	char str[101];
	scanf("%s", str);
	
	for(int i=0; i<strlen(str); i++){
		if(str[i]>=97) str[i] -= 32;
		else str[i] += 32;
	}
	
	printf("%s\n", str);
	
	return 0;
}