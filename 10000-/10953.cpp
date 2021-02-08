#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	int T;
	scanf("%d", &T);
	
	while(T--){
		char s[4];
		scanf("%s", s);
		int sum = s[0] + s[2] - 96;
		printf("%d\n", sum);
	}
	
	return 0;
}