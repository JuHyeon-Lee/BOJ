#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string s;
	cin >> s;
	
	bool answer = true;
	for(int i=0; i<s.length()/2; i++){
		if(s[i]!=s[s.length()-i-1]) answer = false;
	}
	
	printf("%d\n", answer);
	
	return 0;
}