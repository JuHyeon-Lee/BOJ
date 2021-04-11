#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	while(N--){
		string s;
		cin >> s;
		
		if(s[s.length()-1]%2==1) printf("odd\n");
		else printf("even\n");
	}
	
	return 0;
}