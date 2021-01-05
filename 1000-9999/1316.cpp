#include <iostream>
#include <cstring>

using namespace std;

bool checkGroupWord(char *str){
	bool check[26];
	for(int i=0; i<26; i++){
		check[i] = false;
	}
	
	for(int i=0; i<strlen(str); i++){
		char c = str[i];
		if(check[c-97]) return false;
		check[c-97] = true;
		while(i<strlen(str)-1){
			i++;
			if(str[i]!=c){
				i--;
				break;
			}
		}
	}
	
	return true;
}

int main(){
	
	int N;
	scanf("%d", &N);
	
	int cnt = 0;
	while(N--){
		char str[100];
		scanf("%s", str);
		
		if(checkGroupWord(str)) cnt++;
	}
	
	printf("%d", cnt);
	
	return 0;
}