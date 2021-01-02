#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		
		char s[80];
		scanf("%s", s);
		
		int cnt = 0;
		int total = 0;
		for(int j=0; j<strlen(s); j++){
			if(s[j]=='O'){
				cnt++;
				total += cnt;
			} else {
				cnt = 0;
			}
		}
		
		printf("%d\n", total);
	}
	
	return 0;
}