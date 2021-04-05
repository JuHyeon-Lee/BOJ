#include <iostream>

using namespace std;

int N, cur, before, maxLen, len;

int main(){
	
	scanf("%d", &N);
	
	before = 1001;
	
	for(int i=0; i<N; i++){
		scanf("%d", &cur);
		
		if(cur>before) len += cur - before;
		
		if(cur<=before || i==N-1){
			if(maxLen<len){
				maxLen = len;
			}
			len = 0;
		}
		
		before = cur;
	}
	
	printf("%d\n", maxLen);
	
	return 0;
}