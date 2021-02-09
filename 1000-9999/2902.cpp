#include <iostream>

using namespace std;

int main(){
	
	char str[101];
	
	scanf("%s", str);
	
	for(int i=0; str[i]!='\0'; i++){
		if(i==0) printf("%c", str[i]);
		else if(str[i]==45) printf("%c", str[i+1]);
	}
	
	return 0;
}