#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	int loc[26];
	for(int i=0; i<26; i++){
		loc[i] = -1;
	}
	
	char str[101];
	scanf("%s", str);
	
	for(int i=0; i<strlen(str); i++){
		if(loc[str[i]-97]==-1) loc[str[i]-97] = i;
	}
	
	for(int i=0; i<26; i++){
		printf("%d ", loc[i]);
	}
	
	return 0;
}