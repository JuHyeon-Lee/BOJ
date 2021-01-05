#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	char str[100];
	scanf("%s", str);
	
	int cnt = 0;
	for(int i=0; i<strlen(str); i++){
		cnt++;
		switch(str[i]){
			case 'c':
				if(i!=strlen(str)-1){
					char next = str[i+1];
					if(next=='='||next=='-'){
						i++;
						continue;
					}
				}
				break;
			case 'd':
				if(i!=strlen(str)-1){
					char next = str[i+1];
					if(next=='-'){
						i++;
						continue;
					}
				}
				if(i!=strlen(str)-2){
					if(str[i+1]=='z'&&str[i+2]=='='){
						i+=2;
						continue;
					}
				}
				break;
			case 'l':
				if(i!=strlen(str)-1){
					char next = str[i+1];
					if(next=='j'){
						i++;
						continue;
					}
				}
				break;
			case 'n':
				if(i!=strlen(str)-1){
					char next = str[i+1];
					if(next=='j'){
						i++;
						continue;
					}
				}
				break;
			case 's':
				if(i!=strlen(str)-1){
					char next = str[i+1];
					if(next=='='){
						i++;
						continue;
					}
				}
				break;
			case 'z':
				if(i!=strlen(str)-1){
					char next = str[i+1];
					if(next=='='){
						i++;
						continue;
					}
				}
				break;
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}